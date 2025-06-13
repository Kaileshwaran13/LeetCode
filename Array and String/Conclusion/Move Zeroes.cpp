class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int zeroIdx = 0, nonZeroIdx = 0;
        
        while (zeroIdx < n && nonZeroIdx < n) {
            while (zeroIdx < n && nums[zeroIdx] != 0)
                ++zeroIdx;
            while (nonZeroIdx < n && nums[nonZeroIdx] == 0)
                ++nonZeroIdx;
            
            if (zeroIdx < n && nonZeroIdx < n) {
                if (zeroIdx < nonZeroIdx) {
                    swap(nums[zeroIdx], nums[nonZeroIdx]);
                } else {
                    ++nonZeroIdx;
                }
            }
        }
    }
};
