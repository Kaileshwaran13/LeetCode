class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string min = strs[0], max = strs[strs.size() - 1];
        string str = "";
        for (int i = 0; i < min.size(); i++) {
            if (min[i] != max[i]) {
                return str;
            }
            str += min[i];
        }
        
        return str;
    }
};
