class Solution
{
public:
    int minimumDifference(vector<int> &nums, int k)
    {
        if (nums.size() < 2)
            return 0;
        sort(nums.begin(), nums.end());
        int minVal = INT_MAX;
        for (int i = 0; i < nums.size() - k + 1; i++)
        {
            minVal = min(minVal, (abs(nums[i] - nums[i + k - 1])));
        }
        return minVal;
    }
};