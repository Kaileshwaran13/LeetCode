class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int end = 0, flip_count = 0, max_value = 0;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                flip_count++;
            }
            while(flip_count == 2){
                if(nums[end] == 0){
                    flip_count--;
                }
                end++;
            }
            max_value = max(max_value, i - end + 1);
        }
        return max_value;
    }
};
