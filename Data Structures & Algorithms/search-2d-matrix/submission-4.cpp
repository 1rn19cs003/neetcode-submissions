class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0;
        int r = m - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (matrix[mid][n-1] == target)
                return true;
            else if (matrix[mid][n-1] < target) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        int nl=0;
        int nr=n-1;
        while(nl<=nr){
            // cout << mid << " " << i << " " << matrix[mid][i] << " " << target << endl;
            int nm= nl + (nr - nl) / 2;
            if (matrix[l][nm] == target) return true;
            else if(matrix[l][nm]<target) nl=nm+1;
            else if(matrix[l][nm]>target) nr=nm-1;
        }
        return false;
    }
};
