class Solution {
public:
    char findTheDifference(string s, string t) {
        int num1 = 0, num2 = 0;
        for(char x : s)
            num1 += x;
        for(char x : t)
            num2 += x;
        return char(abs(num1 - num2));
    }
};
