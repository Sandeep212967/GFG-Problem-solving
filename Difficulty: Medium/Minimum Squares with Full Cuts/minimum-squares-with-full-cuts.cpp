class Solution {
  public:
  int minSquares(int n, int m) {
     long long totalSquares = 0;

          while (n > 0 && m > 0) {
              if (n < m) {
                  std::swap(n, m);
              }
              // n is now the larger or equal side, m is the smaller side
              totalSquares += (n / m);
              n = n % m;
          }

          return totalSquares;
    }
};