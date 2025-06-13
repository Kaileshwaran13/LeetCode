class Solution {
public:
    int moveRight(vector<int>& arr) {
        for (int i = 0; i < arr.size()-1; ++i)
            if (arr[i] >= arr[i+1])
                return i;
        return arr.size()-1;
    }
    
    int moveLeft(vector<int>& arr) {
        for (int j = arr.size()-1; j > 0; --j)
            if (arr[j-1] <= arr[j])
                return j;
        return 0;
    }
    
    bool validMountainArray(vector<int>& arr) {
        int leftIdx = moveRight(arr);
        int rightIdx = moveLeft(arr);
        return (leftIdx == rightIdx && leftIdx < arr.size()-1 && rightIdx > 0);
    }
};
