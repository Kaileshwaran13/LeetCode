class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxSum = 0, curSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                curSum++;
            } else {
                curSum = 0;
            }
            maxSum = max(curSum, maxSum);
        }
        return maxSum;
        
    }
};
