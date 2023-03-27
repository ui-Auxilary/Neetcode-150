// 1. Naiive Solution
// 2. Alternative Solution

// Naiive solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        auto s = std::set {};
        for (auto n : nums) {
            if (set.contains(n)) { return false; }
             s.insert(n)
        }
        return true;
    }
};

// Alternative solution
class Solution {
public:
    // Check size of array is larger than constructed set
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > std::unordered_set<int>(nums.begin(), nums.end()).size();
    }
};

