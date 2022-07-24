#include <iostream> 
using namespace std;
void rotateMatrix(int mat[][4], int n, int m)
{
    // Write your code here
    int rotate = (n/2 == 0 ? n/2 : n/2 + 1);  // rotate the matrix by number of times
    for (int rot = 0 ; rot < rotate ; rot++)
    {
        int first_row = rot;
        int first_col = rot;
        int last_row = n - rot - 1;
        int last_col = n - rot - 1;
        int val = mat[rot][rot];
       // int i = 0;
        for (int j = 1; j < m-rot ; j++) // for first row
        {
                val = mat[first_row][j-1];
                mat[first_row][j] = val;           
        }
        
        for (int j = 1 ; j < m-rot; j++) // for last column
        {
            int num = mat[j][last_col];
            mat[j][last_col] = val;
            val = num;
        }
        
        for(int j = m-2 ; j >= rot ; j-- )  // for last row
        {
            int num = mat[last_row][j];
            mat[last_row][j] = val;
            val = num;
        }
        
        for (int j = m-2 ; m > rot ; j--) // for first_col
        {
            int num = mat[j][first_col];
            mat[j][first_col] = val;
            val = num;
        }
       // mat[rot][rot] = val;
        
    }
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout<<mat[i][j] << " "; 
        }
        cout<<endl;
    }
    
}


int main(int argc, char *argv[]){
   int mat[][4] = {{1,2,3,4},
    {5 ,6,7,8},
    {9,10,11,12},
    {13,14,15,16}};
    rotateMatrix(mat , 4,4);
    return 0;
}