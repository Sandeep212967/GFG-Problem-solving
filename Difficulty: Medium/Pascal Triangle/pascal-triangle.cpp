class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int> ans;
          long long val = 1;

          for (int i = 0; i < n; i++) {
              ans.push_back(val);
              val = val * (n - 1 - i) / (i + 1);
          }

          return ans;
    }
};
