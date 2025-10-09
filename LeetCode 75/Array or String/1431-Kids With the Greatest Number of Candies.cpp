class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = 0;
        for (auto x : candies) {
            maxCandies = max(x, maxCandies);
        }
        vector<bool> result;
        for (auto x : candies) {
            if (x + extraCandies >= maxCandies)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
};
