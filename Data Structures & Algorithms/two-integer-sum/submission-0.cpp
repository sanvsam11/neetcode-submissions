class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> visited;
        for(int i=0;i<nums.size();++i){
            int n = nums[i];
            if(visited.contains(target-n)){
                return {visited[target-n], i};
            }
            visited[n] = i;
        }
        return {};

    }
};
