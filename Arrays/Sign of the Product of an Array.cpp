class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negative = 0, possitive = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0)
                return 0;
            else if(nums[i] > 0)
                possitive++;
            else
                negative++;
            }
        if(negative % 2 == 0)
            return 1;
        else 
            return -1;
    }
};
