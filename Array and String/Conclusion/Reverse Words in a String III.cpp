class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        for (int end = 0; end <= s.length(); end++) {
            if(s[end] == ' ' || end == s.length()) {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }
    return s;
    }
};
