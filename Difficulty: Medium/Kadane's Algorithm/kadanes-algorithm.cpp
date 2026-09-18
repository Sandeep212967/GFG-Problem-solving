class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int currentsum=arr[0];
         int maxsum=arr[0];
    for(int i=1 ;i < n ;i++){
        currentsum = max(arr[i],currentsum +arr[i]);
        maxsum = max(maxsum,currentsum);
    }
    return maxsum;
    }
};