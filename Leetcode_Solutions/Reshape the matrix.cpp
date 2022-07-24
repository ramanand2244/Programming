class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> data;
        int row = mat.size();
        int col = mat[0].size();
        if(row == r || col == c || r*c > row*col || r*c < row*col) return mat;
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                data.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> data1(r);
        
        int val = 0;
        for(int i = 0; i<r; i++) {
            data1[i] = vector<int> (c);
            for(int j = 0; j < c; j++) {
                data1[i][j] = data[val];
                val++;
            }
        }
    return data1;
    }
};