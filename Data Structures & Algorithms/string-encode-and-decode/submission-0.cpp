class Solution {
public:

    string encode(vector<string>& strs) {
        string output;
        for(string s:strs){
            output += std::to_string(s.length());
            output += "#";
            output += s;
        }
        return output;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
        int length = s.length();
        string size = "";
        while(i<length){
            char c = s[i++];
            if(std::isdigit(c))
                size += c;
            else if(c=='#'){
                int size_val = std::stoi(size);
                int end = size_val + i;
                string current = "";
                while(i<end)
                    current += s[i++];
                result.push_back(current);
                size = "";
            }
        }
        return result;
    }
};
