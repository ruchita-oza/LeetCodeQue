class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        for (char& c : s) {
            m[c]++;
        }
        for (char& c : t) {
            m[c]--;
        }
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] != 0) return false;
        }
        for (int i = 0; i < t.size(); i++) {
            if (m[t[i]] != 0) return false;
        }
        return true;
    }
};