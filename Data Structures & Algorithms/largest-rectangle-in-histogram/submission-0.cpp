class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> h;
        int maxArea = 0;
        for (int i = 0; i < heights.size(); i++) {
            int start = i;
            while (!h.empty() && h.top().second > heights[i]) {
                maxArea = max(maxArea,
                    (i - h.top().first) * h.top().second);

                start = h.top().first;
                h.pop();
            }
            h.push({start, heights[i]});
        }
        while (!h.empty()) {
            maxArea = max(maxArea,
                ((int)heights.size() - h.top().first) * h.top().second);

            h.pop();
        }

        return maxArea;
    }
};
