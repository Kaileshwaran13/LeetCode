class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int longestStringLength = max(word1.length(), word2.length());
        cout << longestStringLength;
        string merged = "";
        for (int i = 0; i < longestStringLength; i++) {
            if(i < word1.length()) {
                merged += word1[i];
            }
            if(i < word2.length()) {
                merged += word2[i];
            }
        }
        return merged;
    }
};
