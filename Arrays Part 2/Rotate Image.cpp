// Link: https://leetcode.com/problems/rotate-image/

// Optimized solution
class Solution { 
public:
void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    for(int i=0;i<n/2;i++)
    {
        for(int j=i;j<n-i-1;j++)
        {
            int x=matrix[i][j];
            matrix[i][j]=matrix[n-j-1][i];
            matrix[n-j-1][i]=matrix[n-i-1][n-j-1];
            matrix[n-i-1][n-j-1]=matrix[j][n-i-1];
            matrix[j][n-i-1]=x;
        }
    }
}
};

// rotation using an extra array
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size()-1;
//         int v[n+1][n+1];
//         for( int i=0; i<n+1; i++ ) {
//             for(int j=0; j<n+1; j++ ) {
//                 v[i][j] = matrix[n-j][i];
//             }
//         }
//         for( int i=0; i<n+1; i++ ) {
//             for(int j=0; j<n+1; j++ ) {
//                 matrix[i][j] = v[i][j];
//             }
//         }
//     }
// };

