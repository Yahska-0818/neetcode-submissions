class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res = nums;
        int pre = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            res[i] = pre;
            pre*=nums[i];
        }
        int post = nums[nums.size()-1];
        for (int i = nums.size()-2;i>=0;i--) {
            if (i!=0) {
                res[i]*=post;
                post*=nums[i];
            } else {
                res[i] = post;
            }
        }
        return res;
    }
};
