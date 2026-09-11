class Solution {
  public:
    int sumOfMatrix(vector<vector<int>>& mat) {
        // code here
        long long sum=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0 ; j<mat[i].size();j++){
             sum=sum+mat[i][j];
            }
        }
        return sum;
    }
};