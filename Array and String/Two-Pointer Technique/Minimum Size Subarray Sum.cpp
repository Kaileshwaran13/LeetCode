class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, start = 0, minLength = nums.size() + 1;
        for (int end = 0; end < nums.size(); end++) {
            sum += nums[end];
            while (sum >= target) {
                minLength = min(minLength, (end - start) + 1);
                sum -= nums[start];
                start++;
            }
        }
        if (minLength == nums.size() + 1) 
            return 0;
        else
            return minLength;
    }
};
