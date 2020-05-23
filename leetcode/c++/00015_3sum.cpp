#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3) return vector<vector<int>>();
        vector<vector<int>> ans;

        std::sort(nums.begin(), nums.end());

        for (int i=0; i < nums.size()-2; i++) {
            int target = -nums[i], start = i+1, end = nums.size()-1;
            if (target < 0) break;
            while (start < end) {

                int res = nums[start] + nums[end];
                if (res == target) {
                    vector<int> res = {nums[i], nums[start], nums[end]};
                    ans.push_back(res);
                    while (start < end && (nums[end] == res[2])) end--;
                    while (start < end && (nums[start] == res[1])) start++;
                }
                else if (res > target) {
                    end--;
                }
                else {
                    start++;
                }
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
        }
        return ans;
    }
};
