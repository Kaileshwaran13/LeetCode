class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int possitive = 0, negative = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0)
                possitive++;
            else if(nums[i] < 0)
                negative++;
        }
        return max(possitive, negative);
        
    }
};
