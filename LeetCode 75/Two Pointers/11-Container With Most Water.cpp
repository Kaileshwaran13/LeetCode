class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0, end = height.size() - 1;
        int maxCapacity = 0, currentCapacity = 0, b = 0;
        while (start < end) {
            b = end - start;
            currentCapacity = min(height[start], height[end]) * b;
            maxCapacity = max(maxCapacity, currentCapacity);
            if (height[start] <= height[end])
                start++;
            else 
                end--;
        }
        return maxCapacity;
    }
};
