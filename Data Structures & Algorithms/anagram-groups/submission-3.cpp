class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> seen;
        for (string s : strs) {
            vector<int> count(26,0);
            for (char x : s) {
                count[x-'a']++;
            }
            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }
            seen[key].push_back(s);
        }
        vector<vector<string>> output;
        for (auto i : seen) {
            output.push_back(i.second);
        }
        return output;
    }
};
