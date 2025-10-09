class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start = 0, end = s.size();
        for (int i = 0; i < t.size(); i++) {
            if(t[i] == s[start])
                start++;
        }
        cout << start << " " << end << '\n';
        if (start == end) 
            return true;
        else
            return false;
    }
};
