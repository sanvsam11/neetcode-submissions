class Solution {
public:
    bool isValid(const vector<int>& window_freq, const vector<int>& t_freq){
        for(int i=0;i<window_freq.size();++i){
            if(window_freq[i]<t_freq[i])
                return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        int minLength = INT_MAX;
        int minStart = 0;
        int s_size = (int)s.length();
        vector<int> t_freq(128, 0);
        for(char c:t)
            t_freq[c]++;
        int i=0, j=0;
        vector<int> window_freq(128, 0);
        while(j<s_size){
            window_freq[s[j]]++;
            while(isValid(window_freq, t_freq)){
                if(minLength>(j-i+1)){
                minLength = j-i+1;
                minStart = i;
            }
            window_freq[s[i]]--;
            i++;
            }
            j++;
        }
        return (minLength==INT_MAX)?"":s.substr(minStart, minLength);
    }
};
