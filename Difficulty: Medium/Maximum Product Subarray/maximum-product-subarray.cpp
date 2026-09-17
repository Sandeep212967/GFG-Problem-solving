class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n=arr.size();
            int maxpro = arr[0];
            int minpro=arr[0];
            int ans=arr[0];
            for(int i=1 ; i < n ; i++){
                int current = arr[i];
                int oldmax=maxpro;
                int oldmin=minpro;
                maxpro=max({current,oldmax*current ,oldmin*current});
                minpro=min({current,oldmax*current ,oldmin*current});

                ans =max(ans,maxpro);
            }
            return ans ;
    }
};