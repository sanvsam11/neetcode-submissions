class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int min = prices[0];
        for(int i=1;i<prices.size();i++){
            int curr = prices[i];
            result = std::max(result, curr-min);
            min = std::min(min, curr);
        }
        return result;
    }
};
