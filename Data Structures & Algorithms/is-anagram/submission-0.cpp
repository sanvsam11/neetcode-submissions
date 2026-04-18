class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        std::vector<int> char_count(26);
        for(char c:s)
            char_count[c-'a']++;
        for(char c:t)
            if(char_count[c-'a']<=0)
                return false;
            else
                char_count[c-'a']--;
        return true;
    }
};
