#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int max_area = 0;
        while (l < r) {
            max_area = max(max_area, min(height[l], height[r]) * (r - l));
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return max_area;
    }
};