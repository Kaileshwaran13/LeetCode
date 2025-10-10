class Solution {
public:

    string removeExtraSpaces (string s) {
        int size = s.size(), spaces = 0, i = 0;
        string removedSpaces;
        bool isWordsStarted = false;
        while (i < size) {
            if(s[i] == ' ')
                i++;
            else    
                break;
        }
        for (i; i < size; i++) {

            if (s[i] == ' ') {
                spaces++;
            } 
            if (spaces > 0 && s[i + 1] != ' ' && i != s.size() - 1 && isWordsStarted) {
                removedSpaces += ' ';
                spaces = 0;
            } 
            if(s[i] != ' ') {
                removedSpaces += s[i];
                isWordsStarted = true;
            }
        }
        return removedSpaces;
    }

    string reverseFullStr (string s) {
        int start = 0, end = s.size() - 1;
        while(start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
        return s;
    }

    string reverseRangeWords (string s, int start, int end) {
        while (start < end) {
            swap (s[start], s[end]);
            start++;
            end--;
        }
        return s;
    }

    string reverseWords (string s) {
        s = removeExtraSpaces(s);
        s = reverseFullStr(s);
        int start = 0, end = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                end = i - 1;
                s = reverseRangeWords (s, start, end);
                start = i + 1;
            }
        }
        s = reverseRangeWords (s, start, s.size() - 1);
        return s;
    }
};  
