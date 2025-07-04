class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;

        for(int i=0; i < (min(m, n) + 1) / 2; i++){

            for(int j = i; j < n - i; j++) {
                if(matrix[i][j] == -101) return ans;
                ans.push_back(matrix[i][j]);
                matrix[i][j] = -101;
            }
            for(int j = i + 1; j < m - i; j++) {
                if(matrix[j][n - i - 1] == -101) return ans;
                ans.push_back(matrix[j][n - i - 1]);
                matrix[j][n - i - 1] = -101;
            }
            for(int j = n - i - 2; j >= i; j--) {
                if(m - i - 1 <= i) break;  // avoid duplicate row
                if(matrix[m - i - 1][j] == -101) return ans;
                ans.push_back(matrix[m - i - 1][j]);
                matrix[m - i - 1][j] = -101;
            }
            for(int j = m - i - 2; j > i; j--) {
                if(n - i - 1 <= i) break;  // avoid duplicate column
                if(matrix[j][i] == -101) return ans;
                ans.push_back(matrix[j][i]);
                matrix[j][i] = -101;
            }

            
            // for(int j = i; j<=n-i; j++){
            //     if(matrix[i][j] == -101){
            //         return ans;
            //     }
            //     ans.push_back(matrix[i][j]);
            //     matrix[i][j] = -101;
            // }
            // for(int j = i+1; j<=m-i; j++){
            //     if(matrix[j][n-i] == -101){
            //         return ans;
            //     }
            //     ans.push_back(matrix[j][n-i]);
            //     matrix[j][n-i] = -101;
            // }
            // for(int j = n-i-1; j>=i; j--){
            //     if(matrix[m-i][j] == -101){
            //         return ans;
            //     }
            //     ans.push_back(matrix[m-i][j]);
            //     matrix[m-i][j] = -101;
            // }
            // for(int j = m-i-1; j>=i+1; j--){
            //     if(matrix[j][i] == -101){
            //         return ans;
            //     }
            //     ans.push_back(matrix[j][i]);
            //     matrix[j][i] = -101;
            // }
        }
        return ans;
    }
};