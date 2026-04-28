class Solution {
public:
    int characterReplacement(string s, int k) {
        int result = 0, maxFreq = 0;
        vector<int> count(26);
        int start = 0;
        for(int end=0;end<s.length();++end){
            count[s[end]-'A']++;
            maxFreq = std::max(maxFreq, count[s[end]-'A']);
            int window_size = end-start+1-maxFreq;
            if(window_size>k)
                count[s[start++]-'A']--;
            result = std::max(result, end-start+1);
        }
        return result;
    }
};
