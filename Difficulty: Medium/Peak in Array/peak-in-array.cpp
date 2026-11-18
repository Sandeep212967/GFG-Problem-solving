class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        int low = 0, high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // Peak lies on the right side
                low = mid + 1;
            } 
            else {
                // Peak is at mid or on the left side
                high = mid;
            }
        }

        return low;

    }
};