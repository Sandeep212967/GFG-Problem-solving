class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
          int mn=arr[0];
          int mx=arr[0];
        for(int i=1;i<n;i++){
       if (arr[i] < mn) {
                   mn = arr[i];
               }

               if (arr[i] > mx) {
                   mx = arr[i];
               }
        }
           return {mn, mx};
    }
};