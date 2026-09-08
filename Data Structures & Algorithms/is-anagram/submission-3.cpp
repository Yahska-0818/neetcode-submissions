class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> count;
        for (char x : s) {
            if (count.find(x) != count.end()) {
                count[x]++;
            }
            else {
                count[x] = 1;
            }
        }
        for (char x : t) {
            if (count.find(x) != count.end()) {
                count[x]--;
            } else {
                count[x] = 1;
            }
        }
        int zeros = 0;
        for (auto val : count) {
            if (val.second) {
                zeros++;
            }
        }
        if (zeros) {
            return false;
        } else {
            return true;
        }
    }
};
