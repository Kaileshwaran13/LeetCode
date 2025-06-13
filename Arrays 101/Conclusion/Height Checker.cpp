class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> sortedVal = heights;
        sort(sortedVal.begin(), sortedVal.end());
        for(int i = 0; i < heights.size(); i++){
            if(sortedVal[i] != heights[i]){
                count++;
            }
        }
        sortedVal.clear();
        return count;
    }
};
