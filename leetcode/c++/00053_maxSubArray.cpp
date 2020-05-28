class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        vector<int> localMaximum = vector<int>(n, 0);
        localMaximum[0] = nums[0];

        for (int i(1); i < n; i++) {
            if (nums[i] < localMaximum[i-1] + nums[i]) localMaximum[i] = localMaximum[i-1] + nums[i];
            else localMaximum[i] = nums[i];
        }
        return *max_element(localMaximum.begin(), localMaximum.end());
    }
};
