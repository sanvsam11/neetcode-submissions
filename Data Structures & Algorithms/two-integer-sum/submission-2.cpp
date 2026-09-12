class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> complements;
        complements.reserve(nums.size());
        for(int i=0;i<nums.size();i++){
            auto it = complements.find(nums[i]);
            if(it!=complements.end())
                return {complements.at(nums[i]), i};
            complements[target-nums[i]]= i;
        }
        return {};
    }
};
