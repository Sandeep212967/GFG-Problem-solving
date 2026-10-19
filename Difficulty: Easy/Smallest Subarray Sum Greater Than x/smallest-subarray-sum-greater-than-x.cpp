class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // code here
        int n = arr.size();
        int left = 0;
        int sum = 0;
        int minLen = INT_MAX;

         for (int right = 0; right < n; right++) {
                 sum += arr[right];

            while (sum > x) {
                minLen = min(minLen, right - left + 1);
                       sum -= arr[left];
                       left++;
                   }
               }

               return minLen == INT_MAX ? 0 : minLen;
    }
};