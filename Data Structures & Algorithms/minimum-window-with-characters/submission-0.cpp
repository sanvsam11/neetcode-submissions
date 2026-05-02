class Solution {
public:
    string minWindow(string s, string t) {
        int minLength = -1;
        int minStart = 0, minEnd = 0;
        int s_size = (int)s.length();
        vector<int> t_freq(128, 0);
        vector<int> s_freq(128, 0);
        for(char c:t)
            t_freq[c]++;
        for(int i=0;i<s_size;++i)
            for(int j=i;j<s_size;++j){
                vector<int> window_freq(128, 0);
                for(int k=i;k<=j;++k)
                    window_freq[s[k]]++;
                bool is_invalid = false;
                for(int ci=0;ci<window_freq.size();ci++)
                    if(window_freq[ci]<t_freq[ci]){
                        is_invalid = true;
                        break;
                    }
                if(is_invalid)
                    continue;
                if(minLength==-1)
                    minLength = s_size;
                if(minLength>(j-i+1)){
                    minLength = j-i+1;
                    minStart = i;
                    minEnd = j;
                }
            }
        return (minLength==-1)?"":s.substr(minStart, minLength);
    }
};
