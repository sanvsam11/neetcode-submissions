class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int curr_min = prices[0];
        for(int i=1;i<prices.size();i++){
            int curr = prices[i];
            result = std::max(result, curr-curr_min);
            curr_min = std::min(curr_min, curr);
        }
        return result;
    }
};
