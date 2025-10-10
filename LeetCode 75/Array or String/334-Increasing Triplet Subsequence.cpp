class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX, size = nums.size();
        for (int i = 0; i < size; i++) {
            if (first >= nums[i]) {
                first = nums[i];
            } else if (second >= nums[i]) {
                second = nums[i];
            } else {
                return true;
            }
        }
        return false;
    }
};
