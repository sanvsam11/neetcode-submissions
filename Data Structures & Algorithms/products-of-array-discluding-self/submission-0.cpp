class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        int product = 1;
        for(int i=0;i<nums.size()-1;++i){
            product *= nums[i];
            result[i+1] *= product;
        }
        product = 1;
        for(int i=nums.size()-1;i>0;--i){
            product *= nums[i];
            result[i-1] *= product;
        }
        return result;
    }
};