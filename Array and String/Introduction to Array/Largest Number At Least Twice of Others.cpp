class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxVal = 0, index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(maxVal < nums[i]) {
                maxVal = nums[i];
                index = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (maxVal < nums[i] * 2 && index != i) {
                return -1;
            }
        }        
        return index;
    }
};
