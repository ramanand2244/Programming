class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int i = 0;

        for(i = 0 ;i < row ; i++) {
        
            if (matrix[i][0] <= target && matrix[i][col - 1] >= target) break;
        }
        if(i == row) return 0;
        for(int j = 0; j < col ; j++) {
            if (matrix[i][j] == target) return 1;
        }
        return 0;
    }
};