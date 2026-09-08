class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> has;
        for (int i : nums) {
            if (has.find(i) != has.end()) {
                return true;
            } else {
                has.insert(i);
            }
        }
        return false;
    }
};