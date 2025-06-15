class Solution {
private:
    vector<int> reverse(vector<int> nums,int i,int j) {
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        return nums;
    }



public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        int i = 0, j = nums.size() - k - 1;
        nums = reverse(nums, i, j);
        nums = reverse(nums, j + 1, nums.size() - 1);
        nums = reverse(nums, i, nums.size() - 1);

    }
};
