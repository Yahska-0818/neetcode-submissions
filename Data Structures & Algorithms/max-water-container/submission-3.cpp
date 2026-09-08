class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int water = 0;
        while (l < r) {
            water = max(water,(r-l)*min(heights[l],heights[r]));
            if (heights[l] <= heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        return water;
    }
};
