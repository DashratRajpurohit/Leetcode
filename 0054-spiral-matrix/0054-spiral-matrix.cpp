class Solution {
public:
    vector<int> arr;

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0;
        int bottom = matrix.size() - 1;

        int left = 0;
        int right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {

            // RIGHT
            for (int j = left; j <= right; j++) {
                arr.push_back(matrix[top][j]);
            }
            top++;

            // DOWN
            for (int i = top; i <= bottom; i++) {
                arr.push_back(matrix[i][right]);
            }
            right--;

            // Check before going LEFT
            if (top <= bottom) {
                // LEFT
                for (int j = right; j >= left; j--) {
                    arr.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            // Check before going UP
            if (left <= right) {
                // UP
                for (int i = bottom; i >= top; i--) {
                    arr.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return arr;
    }
};