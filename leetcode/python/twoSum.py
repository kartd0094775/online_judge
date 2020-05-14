class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None
        
class Solution:
    def twoSum(self, nums, target):
        mapping = dict()
        for i, v1 in enumerate(nums):
            if v1 in mapping:
                j = mapping[v1]
                ret = [j, i]
                return ret
            else:
                v2 = target - v1
                    mapping[v2] = i

if __name__ == "__main__":
    sol = Solution()