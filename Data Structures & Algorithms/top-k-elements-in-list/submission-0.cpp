class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numCount;
        for (int num : nums) {
            numCount[num]++;
        }
        
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto pair : numCount) {
            buckets[pair.second].push_back(pair.first);
        }
        
        vector<int> sol;
        for (int i = buckets.size() - 1; i >= 0 && sol.size() < k; i--) {
            for (int num : buckets[i]) {
                sol.push_back(num);
                if (sol.size() == k) {
                    return sol;
                }
            }
        }
        
        return sol;
    }
};