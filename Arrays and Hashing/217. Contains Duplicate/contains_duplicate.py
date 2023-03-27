# 1. Naiive Solution
# 2. Alternative Solution

# 1. Naiive Solution
# class Solution:
#     def containsDuplicate(self, nums: List[int]) -> bool:
#         s = set()
#         for num in nums:
#             if num in s:
#                 return True
#             s.add(num)
#         return False
        
# 2. Alternative Solution
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return len(nums) > len(set(nums))