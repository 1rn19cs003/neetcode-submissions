class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0;
        int r = m - 1;
        int mid = 0;
        while (l < r) {
            mid = l + (r - l) / 2;
            if (matrix[mid][n-1] == target)
                return true;
            else if (matrix[mid][n-1] < target) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }

        // cout << l << endl;
        for (int i = 0; i < n; i++) {
            // cout << mid << " " << i << " " << matrix[mid][i] << " " << target << endl;
            if (matrix[l][i] == target) return true;
        }
        return false;
    }
};
