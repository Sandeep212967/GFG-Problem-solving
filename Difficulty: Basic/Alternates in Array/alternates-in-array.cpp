class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        int n =arr.size();
        vector<int> x;
        for(int i =0 ;i<n;i+=2){
         x.push_back(arr[i]);
        }
      return x;
    }
};