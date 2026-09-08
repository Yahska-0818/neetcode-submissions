class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char,int> count1,count2;
        for (int i = 0; i < s.length(); i++) {
            if (count1.count(s[i])) {
                count1[s[i]]++;
            } else {
                count1[s[i]] = 1;
            }
            if (count2.count(t[i])) {
                count2[t[i]]++;
            } else {
                count2[t[i]] = 1;
            }
        }
        if (count1.size() != count2.size()) {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            if (count1[s[i]]!=count2[s[i]]) {
                return false;
            }
        }
        return true;
    }
};
