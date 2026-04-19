class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> cache;
        int result = 0;
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
