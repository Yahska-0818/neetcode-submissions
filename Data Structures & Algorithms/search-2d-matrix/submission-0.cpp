class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (vector<int> i : matrix) {
            int l = 0;
            int r = i.size()-1;
            while (l<=r) {
                int m = l+(r-l)/2;
                if (i[m] == target) {
                    return true;
                } else if (i[m] < target) {
                    l = m+1;
                } else {
                    r = m-1;
                }
            }
        }
        return false;
    }
};
