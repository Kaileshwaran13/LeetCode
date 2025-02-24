class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxVal = INT_MIN, minVal = INT_MAX;
        unordered_map<int, int> freq;
        for(auto num : nums)
            freq[num]++;
        for(auto x : freq){
            if(x.second > (nums.size() / 2))
                return x.first;
        }
        return -1;
    }
};
