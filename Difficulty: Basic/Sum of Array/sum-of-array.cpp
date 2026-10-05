class Solution {
  public:
    int arraySum(vector<int>& arr) {
        // code here
        int n= arr.size();
        int total = 0 ;
        for(int i=0;i<n;i++){
            total = total + arr[i];
            
        }
        return total;
    }
};