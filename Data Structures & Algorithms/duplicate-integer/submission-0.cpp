#include<algorithm>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int size = nums.size();
        for(int i=1;i<size;i++){
            if(nums[i-1]==nums[i])
                return true;
        }        
        return false;
    }
};