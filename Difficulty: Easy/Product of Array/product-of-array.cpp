class Solution {
  public:
    long long int product(vector<int> &arr) {
        // code here
        int n=arr.size();
        long long ans=1;
        int mod=1000000007;
        int x;
        for(int i=0;i<n;i++){
            
             x = arr[i];
            ans = ( ans * x ) % mod ;
           
            }
        return ans;
    }
};