class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> sol;
        for (int num : nums){
            if (sol.count(num)){
                return true;
            } else {
                sol.insert(num);
            }
        }
        return false;
    }
};