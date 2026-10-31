class Solution {
  public:
    vector<int> findSum(int n) {
        // Code here
        int oddCount = (n + 1) / 2;
             int evenCount = n / 2;

             int oddSum = oddCount * oddCount;
             int evenSum = evenCount * (evenCount + 1);

             return {oddSum, evenSum};
    }
};