class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int for_num1 = m - 1, for_num2 = n - 1, count = m + n - 1;
        while (for_num1 >= 0 && for_num2 >= 0) {
            if (nums1[for_num1] > nums2[for_num2]){
                nums1[count] = nums1[for_num1];
                for_num1--;
                count--;
            } else {
                nums1[count] = nums2[for_num2];
                count--;
                for_num2--;
            }
        }
        while (for_num2 >= 0) {
            nums1[count] = nums2[for_num2];
            count--;
            for_num2--;
        }
    }
};
