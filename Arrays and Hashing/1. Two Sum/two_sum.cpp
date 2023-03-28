// 1. Naiive Solution
// 2. Optimised Solution

// 2. Optimised Solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Store the difference in a map
        auto m = std::unordered_map<int, int> {};
        for (auto p = 0; p < nums.size(); p++) {
            auto num_to_find = target - nums[p];
            if (m.find(num_to_find) == m.end()) {
                m[nums[p]] = p;
            } else {
                return {m[num_to_find], p};
            }
        }
        return std::vector<int>{};
    }
};