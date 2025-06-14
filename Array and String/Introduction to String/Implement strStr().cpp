class Solution {
public:

    bool check(int start, int end, string haystack, string needle){
        int size = end - start;
        for (int i = 0; i < needle.size(); i++) {
            if  (haystack[start + i] != needle[i]) {
                return false;
            }
        }
        return true;
    }

    int strStr(string haystack, string needle) {
        int size = haystack.size() - needle.size(), start = 0, end = needle.size();
        for (int i = 0; i <= size; i++) {
            if (!check(start, end, haystack, needle)) {
                start++;
                end++;
            } else {
                return i;
                break;
            }
        }
        return -1;
    }
};
