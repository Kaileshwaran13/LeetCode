class Solution {
public:

    bool checkVowels (char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            return true;
        else 
            return false;
    }

    string reverseVowels(string s) {
        int left = 0 , right = s.size();
        while (left < right) {
            if(!checkVowels(s[left]))
                left++;
            else if (!checkVowels(s[right]))  
                right--;
            else {
                swap (s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
