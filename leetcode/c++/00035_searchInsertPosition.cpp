#include<vector>

using namespace::std;

class Solution {
  public:
    int searchInsert(vector<int>& nums, int target) {
      int left = 0;
      int right = nums.size() - 1;
      int middle;
      while(left <= right) {
        middle = (left + right) / 2;
        if (target > nums[middle]) left = middle + 1;
        else if (target < nums[middle]) right = middle - 1;
        else return middle;
      }
      if (nums[middle] < target) return middle + 1;
      return middle;
    }
};













