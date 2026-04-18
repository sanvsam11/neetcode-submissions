class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string,vector<string>> cache;
        for(string s:strs){
            string sorted = s;
            std::sort(sorted.begin(),sorted.end());
            cache[sorted].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& [key, value]:cache)
            result.push_back(value);
        return result;
    }
};
