class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        sort (nums.begin(), nums.end());
        for (int i = 0; i < size - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                i++;
            } else {
                return nums[i];
            }
        }
        return nums[size - 1];
    }
};
