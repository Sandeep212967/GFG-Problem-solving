class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        // code here
        int n =arr.size();
        int count =0;
        int move=0;
        for(int i=0;i<n;i++){
            if(arr[i] % 2== 0)
            count++;
            else
            move++;
        }
        return {move,count};
    }
};