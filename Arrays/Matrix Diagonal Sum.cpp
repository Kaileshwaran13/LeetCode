class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int odd = (mat.size() / 2), sum = 0;
        for(int i = 0, j = 0; i < mat.size(), j < mat.size(); i++, j++){
            sum += mat[i][j];
        }
        for(int i = mat.size() - 1, j = 0; i > 0, j < mat.size(); i--, j++){
            sum += mat[i][j];
        }

        if(mat.size() == 1)
            return mat[0][0];
        else if(mat.size() % 2 != 0){
            sum -= mat[odd][odd];
        }
        return sum;
    }
};
