class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int,int> freq;
        std::vector<int> result;
        for(int n : nums)
            freq[n]++;
        std::vector<pair<int, int>> decr;
        for(auto& [num, count]: freq)
            decr.push_back({count, num});
        sort(decr.begin(), decr.end(), greater<pair<int,int>>());
        for(int i=0;i<k;i++)
            result.push_back(decr[i].second);
        return result;
    }
};
