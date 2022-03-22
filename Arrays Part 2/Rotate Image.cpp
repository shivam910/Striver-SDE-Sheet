// Link: https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size()-1;
        int v[n+1][n+1];
        for( int i=0; i<n+1; i++ ) {
            for(int j=0; j<n+1; j++ ) {
                v[i][j] = matrix[n-j][i];
            }
        }
        for( int i=0; i<n+1; i++ ) {
            for(int j=0; j<n+1; j++ ) {
                matrix[i][j] = v[i][j];
            }
        }
    }
};
