class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size();
              int m = mat[0].size();

              int low = 0;
              int high = n * m - 1;

              while (low <= high) {
                  int mid = low + (high - low) / 2;

                  int row = mid / m;
                  int col = mid % m;

                  if (mat[row][col] == x)
                      return true;

                  else if (mat[row][col] < x)
                      low = mid + 1;

                  else
                      high = mid - 1;
              }

              return false;

    }
};