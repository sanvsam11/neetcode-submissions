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
            int i=n;
            while(cache.count(i-1))
                i--;
            int size = 1;
            while(cache.count(i+1))
                i++;
            result = std::max(i-n+1, result);
        }
        return result;
    }
};
