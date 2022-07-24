class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vect;
        for (int i = 0 ; i < numRows ; i++)
        {
            vector<int> rows(i+1, 1);
            for (int j = 1; j < i ; j++)
            {
                    rows[j] = vect[i-1][j] + vect[i-1][j-1];   
            }
            vect.push_back(rows);
        }
        return vect;
    }
};
