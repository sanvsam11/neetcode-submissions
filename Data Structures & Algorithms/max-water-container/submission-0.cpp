class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0, j=heights.size()-1, result = 0;
        while(i<j){
            int water  = std::min(heights[i],heights[j])*(j-i);
            result = std::max(result, water);
            if(heights[i]>heights[j])
                j--;
            else
                i++;
        }
        return result;
    }
};
