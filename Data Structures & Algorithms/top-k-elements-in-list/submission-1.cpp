class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> out;
        vector<vector<int>> count(nums.size() + 1);
        unordered_map<int,int> seen;
        for (int i : nums) {
            if (seen.find(i)!=seen.end()) {
                seen[i]++;
            } else {
                seen[i] = 1;
            }
        }
        for (auto i : seen) {
            count[i.second].push_back(i.first);
        }
        for (int i = count.size()-1; i > 0; i--) {
            for (int n : count[i]) {
                out.push_back(n);
                if (out.size()==k) {
                    return out;
                }
            }
        }
        return out;
    }
};
