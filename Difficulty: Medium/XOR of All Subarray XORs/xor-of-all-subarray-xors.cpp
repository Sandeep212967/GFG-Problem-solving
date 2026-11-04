class Solution {
  public:
    int subarrayXor(vector<int>& arr) {
        // code here
        int n = arr.size();
             int ans = 0;

             if (n % 2 == 1) {
                 for (int i = 0; i < n; i += 2) {
                     ans ^= arr[i];
                 }
             }

             return ans;
    }
};