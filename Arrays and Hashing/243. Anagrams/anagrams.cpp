// 1. Naiive Solution
// 2. Alternative Solution
// 3. Optimised Solution

// 1. Naiive Solution
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

// 2. Alternative Solution
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        auto len = s.size();
        if (len != t.size()) return false;
        for (auto i = 0u; i < len; i++) {
            if (m.find(s[i] - 'a') == m.end()) m[s[i]]++;
            if (m.find(t[i] - 'a') == m.end()) m[t[i]]--;
        }

        for (auto &[k, v] : m) {
            if (v != 0) return false;
        }
        return true;
    }
};

// 3. Optimised Solution - Considers sample space of question
class Solution {
public:
    bool isAnagram(string s, string t) {
        auto arr = std::array<int, 26> {0};
        auto len = s.size();
        if (len != t.size()) return false;
        // Sample space only includes lower case letters
        for (auto i = 0; i < len; ++i) {
            ++arr[s[i]-'a'];
            --arr[t[i]-'a'];
        }

        for (auto i = 0; i < 26; ++i) {
            if (arr[i] != 0) return false;
        }
        return true;
    }
};