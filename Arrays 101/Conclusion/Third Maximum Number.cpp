class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == first || nums[i] == second || nums[i] == third ) 
                continue;
            if (nums[i] > first) {
                third = second;
                second = first;
                first = nums[i];
                count++;
            } else if (nums[i] > second) {
                third = second;
                second = nums[i];
                count++;
            } else if (nums[i] > third) {
                third = nums[i];
                count++;
            } 
        }
        if (count >= 3) {
            return third;
        }
        return first;
    }
};
