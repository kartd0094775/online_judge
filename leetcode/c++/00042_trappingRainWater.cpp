#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        if (height.size() == 0 || height.size() == 1 || height.size() == 2) return 0;
        int n = height.size();
 
        int *max_left = new int[n];
        int *max_right = new int[n];
        max_left[0] = 0; max_right[n-1] = 0;
        for (int i = 1; i < n-1; i++) {
            if (height[i-1] > max_left[i-1]) max_left[i-1] = height[i-1];
            if (height[n-i] > max_right[n-i]) max_right[n-i] =  max_right[n-i];
        }

        int total_area = 0;
        for (int i = 1; i < n-1; i++) {
            if (max_left[i] < max_right[i]) total_area += (max_left[i] - height[i]);
            else total_area += (max_right[i] - height[i]);
        }
        return total_area;
    }
};