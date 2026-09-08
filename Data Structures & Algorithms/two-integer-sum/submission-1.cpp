class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        unordered_map<int,int> indices;
        int index = 0;
        for (int num : nums) {
            if (indices.count(target - num)) {
                int i1 = indices[target - num];
                int i2 = index;
                if (i1>i2) {
                    sol.push_back(i2);
                    sol.push_back(i1);
                } else {
                    sol.push_back(i1);
                    sol.push_back(i2);
                }
                return sol;
            }
            indices[num] = index++;
        }
        return sol;
    }
};
