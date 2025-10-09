class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex = 0, size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] != 0) {
                nums[nonZeroIndex] = nums[i];
                nonZeroIndex++;
            }
        }
        for (int i = nonZeroIndex; i < size; i++) {
            nums[i] = 0;
        }
    }
};
