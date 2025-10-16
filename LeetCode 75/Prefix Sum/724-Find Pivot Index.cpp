class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0, size = nums.size(), leftSum = 0;
        
        for (int i = 0; i < size; i++) {
            total += nums[i];
        }

        for (int i = 0; i < size; i++) {
            if (leftSum == total - leftSum - nums[i]) 
                return i;
            leftSum += nums[i];
        }
        return -1;
    }
};
