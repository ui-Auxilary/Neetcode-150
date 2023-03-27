# 1. Naiive Solution
# 2. Alternative Solution
# 3. Optimised Solution

# 1. Naiive Solution
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        flag = True
        word = s if len(s) > len(t) else t
        for c in word:
            if s.count(c) != t.count(c):
                flag = False
        return flag
        
# 2. Alternative Solution
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s) == sorted(t)
        
#3. Optimised Solution
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return all(s.count(x) == t.count(x) for x in set(s + t))