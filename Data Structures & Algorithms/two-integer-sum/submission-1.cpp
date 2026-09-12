class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> complements;
        for(int i=0;i<nums.size();i++){
            if(complements.contains(nums[i]))
                return {complements.at(nums[i]), i};
            complements[target-nums[i]]= i;
        }
        return {};
    }
};
