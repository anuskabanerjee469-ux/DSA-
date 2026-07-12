class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<pair<int, int>> zeros;

        // Step 1: Store all original zero positions
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }

        // Step 2: Set corresponding rows and columns to zero
        for (auto p : zeros) {
            int row = p.first;
            int col = p.second;

            // Set entire row to 0
            for (int j = 0; j < n; j++) {
                matrix[row][j] = 0;
            }

            // Set entire column to 0
            for (int i = 0; i < m; i++) {
                matrix[i][col] = 0;
            }
        }
    }
};