class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        vector<int> sol;
        while (l<r) {
            int sum = numbers[l] + numbers[r];
            if (sum == target) {
                sol.push_back(l+1);
                sol.push_back(r+1);
                return sol;
            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
    }
};
