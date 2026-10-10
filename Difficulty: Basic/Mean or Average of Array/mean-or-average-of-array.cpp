class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int n = arr.size();
        int total =0;
        int count =0;
        for(int i = 0 ;i <n;i++){
            count ++;
            total +=arr[i];
        }
        int x = total / count ;
        return x;
    }
};