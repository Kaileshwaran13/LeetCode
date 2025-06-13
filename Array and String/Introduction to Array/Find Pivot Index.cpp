class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int left = 0, right = sum - nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (left == right) {
                return i;
            } else {
                if (i != 0) {
                    left += nums[i - 1];
                    right -= nums[i];
                    if (left == right) {
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};
