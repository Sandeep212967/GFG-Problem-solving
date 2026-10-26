class Solution {
  public:
    int countSquares(int n) {
        // code here
        int i = 1;
             while (i * i < n) {
                 i++;
             }
             return i - 1;
    }
};