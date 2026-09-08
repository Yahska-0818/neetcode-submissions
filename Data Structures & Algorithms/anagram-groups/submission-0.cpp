class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> wordsMap;
        vector<vector<string>> out;
        for (int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            wordsMap[temp].push_back(strs[i]);
        }
        for (auto &[key, value] : wordsMap) {
            out.push_back(value);
        }
        return out;
    }
};