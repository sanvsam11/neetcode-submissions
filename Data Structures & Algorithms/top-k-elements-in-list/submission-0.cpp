#include<unordered_map>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> cache;
        for(int n:nums)
            cache[n]++;
        vector<pair<int,int>> frequency;
        vector<int> result;
        for(auto& [key, val]:cache)
            frequency.push_back({key, val});
        std::sort(frequency.begin(), frequency.end(), [](auto& a, auto& b){ return a.second > b.second;});
        for(int i=0;i<k;i++)
            result.push_back(frequency[i].first);
        return result;
    }
};