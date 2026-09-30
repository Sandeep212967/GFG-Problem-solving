class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size()+1;
        vector<int> freq(n+1,0);
        for(int x : arr){
            freq[x]++;
        }
        int missing = -1;
        for(int i = 1 ; i<=n ;i++){
                if(freq[i]==0)
               missing = i;
        }
        return missing;
    }
};