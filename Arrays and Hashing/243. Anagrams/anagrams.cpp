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
// hashmap solution, similar to neetcode python implementation
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        
        for(int i = 0; i < s.size(); i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        
        for(int i = 0; i < smap.size(); i++){
            if(smap[i] != tmap[i]) return false;
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