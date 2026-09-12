class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int dict[128] = {0};
        for(char c:s){
            dict[c-'A']++;
        }
        for(char c:t){
            dict[c-'A']--;
        }
        for(int i=0;i<128;++i){
            if(dict[i]!=0)
                return false;
        }
        return true;
    }
};
