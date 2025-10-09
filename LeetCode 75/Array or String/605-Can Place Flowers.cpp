class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int available = 0, size = flowerbed.size();
        if ((size > 1) && (flowerbed[0] == 0) && (flowerbed[1] == 0)) {
            flowerbed[0] = 1;
            available++;
        } else if ((size == 1) && (flowerbed[0] == 0)) {
            flowerbed[0] = 1;
            available++;
        }
        for (int i = 1; i < size - 1; i++) {
            if (flowerbed[i] == 0 && flowerbed[i + 1] == 0 && flowerbed[i - 1] == 0) {
                flowerbed[i] = 1;
                available++;
                i++;
            }
        }
        if (flowerbed[size - 1] == 0 && flowerbed[size - 2] == 0) {
            flowerbed[size - 1] = 1;
            available++;
        }
        if (available >= n)
            return true;
        else
            return false;
    }
};
