class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int val = nums.size();
        for(int i = 0 ; i < nums.size(); i){
            if(nums[i] == 0)
                nums.erase(nums.begin() + i);
            else
                i++;
        }
        for(int i = nums.size(); i < val; i++)
            nums.push_back(0);
    }
};
