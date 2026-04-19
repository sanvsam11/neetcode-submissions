class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        std::unordered_set<int> cache;
        int result = -1;
        for(int n:nums)
            cache.insert(n);
        for(int n:nums){
            if(!cache.count(n-1)){
                int i = n;
                while(cache.count(i+1))
                    i++;
                result = std::max(result, i-n+1);
            }
        }
        return result;
    }
};
