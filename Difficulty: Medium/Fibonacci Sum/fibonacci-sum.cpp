class Solution {
  public:
    int fibSum(int n) {
        // code here
           const long long MOD = 1000000007LL;
        long long a = 0, b = 1;
        long long sum = 0;

        for (int i = 0; i <= n; i++) {
            sum = (sum + a) % MOD;

            long long c = (a + b) % MOD;
            a = b;
            b = c;
        }

        return sum;

    }
};