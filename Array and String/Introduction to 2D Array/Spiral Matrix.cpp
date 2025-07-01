class Solution {

void toRight(vector<vector<int>>& matrix, vector<int>& res, int colStart, int colEnd, int col) {
    for (int i = colStart; i < colEnd; i++) {
        res.push_back(matrix[col][i]);
    }
}

void toDown(vector<vector<int>>& matrix, vector<int>& res, int rowStart, int rowEnd, int row) {
    for (int i = rowStart; i < rowEnd; i++) {
        res.push_back(matrix[i][row]);
    }
}

void toLeft(vector<vector<int>>& matrix, vector<int>& res, int colStart, int colEnd, int col) {
    for (int i = colEnd - 1; i >= colStart; i--) {
        res.push_back(matrix[col][i]);
    }
}

void toUp(vector<vector<int>>& matrix, vector<int>& res, int rowStart, int rowEnd, int row) {
    for (int i = rowEnd - 1; i >= rowStart; i--) {
        res.push_back(matrix[i][row]);
    }
}


public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int colStart = 0, colEnd = matrix[0].size();
        int rowStart = 0, rowEnd = matrix.size();
        vector<int> res;
        while (rowStart < rowEnd && colStart < colEnd) {
            toRight(matrix, res, colStart, colEnd, rowStart++);
            toDown(matrix, res, rowStart, rowEnd, colEnd - 1);
            colEnd--;
            if(rowStart < rowEnd)
                toLeft(matrix, res, colStart, colEnd, rowEnd - 1);
            rowEnd--;
            if(colStart < colEnd)
                toUp(matrix, res, rowStart, rowEnd, colStart);
            colStart++;
        }
        return res;
    }
};
