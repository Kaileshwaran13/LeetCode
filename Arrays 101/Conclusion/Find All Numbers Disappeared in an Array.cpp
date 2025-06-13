class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> findings (nums.size() + 1);
        vector<int> ans;
        for (auto val : nums) {
            findings[val] = true;
        }
        for (int i = 1; i <= nums.size(); i++) {
            if (!findings[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
