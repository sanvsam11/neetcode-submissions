class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> unique;
        std::vector<vector<string>> result;
        for(string s:strs){
            string original = s;
            sort(s.begin(), s.end());
            unique[s].push_back(original);
        }
        for(auto& [key, value] : unique)
            result.push_back(value);
        return result;
    }
};
