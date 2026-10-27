class Solution {
  public:
    int getMaxWeight(string &s) {
        // code here
      int n = s.size();

         // dp[i] = maximum weight obtainable from s[i...n-1]
         vector<int> dp(n + 2, 0);

         for (int i = n - 1; i >= 0; i--) {
             // Leave current character unpaired
             dp[i] = 1 + dp[i + 1];

             // Pair current character with the next character
             if (i + 1 < n) {
                 int cost = (s[i] == s[i + 1]) ? 1 : 0;
                 dp[i] = max(dp[i], 4 - cost + dp[i + 2]);
             }
         }

         return dp[0];
    }
};
