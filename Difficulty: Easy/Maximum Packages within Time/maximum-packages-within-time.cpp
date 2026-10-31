class Solution {
  public:
    int maxPackages(vector<int>& arr, int totalTime) {
        // code here
        int n = arr.size();
                int window = min(n, totalTime);

                int sum = 0;
                int ans = 0;

                // Calculate sum of the first window
                for (int i = 0; i < window; i++) {
                    sum += arr[i];
                }

                ans = sum;

                // Sliding window
                for (int i = window; i < n; i++) {
                    sum += arr[i];
                    sum -= arr[i - window];

                    ans = max(ans, sum);
                }

                return ans;

    }
};