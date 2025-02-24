class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum = 1;
        for(int i = digits.size() - 1; i >= 0; i--){
            if(digits[i] < 9 && sum == 1){
                digits[i] += 1;
                return digits;
            }
            else{
                digits[i] = 0;
                sum = 1;
            }
        }   
        if(sum = 1)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};
