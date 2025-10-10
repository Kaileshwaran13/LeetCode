class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0, altitude = 0, size = gain.size();
        for (int i = 0; i < size; i++) {
            sum += gain[i];
            altitude = max(sum, altitude);
        }
        return altitude;
    }
};
