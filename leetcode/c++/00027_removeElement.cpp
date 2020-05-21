#include<vector>

using namespace::std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        if (length == 0) return 0;

        int prev(0), curr(0);
        while (curr < nums.size()) {
            if (nums[curr] != val) nums[prev++] = nums[curr];
            curr++;
        }
        return prev;
    }
};














