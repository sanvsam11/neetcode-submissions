class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        if(s.length()<1)
            return result;
        std::unordered_set<char> uniq;
        int start = 0, end = 1;
        uniq.insert(s[start]);
        result = 1;
        while(end<s.length()){
            while(uniq.count(s[end]))
                uniq.erase(s[start++]);
            uniq.insert(s[end++]);
            result = std::max(result, (int)uniq.size());
        }
        return result;
    }
};
