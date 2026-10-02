class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
       int largest =INT_MIN;
       int secondlarge =INT_MIN;
       for(int i=0 ;i <arr.size(); i++){
           int x = arr[i];
           if(x > largest){
           secondlarge =largest;
           largest = x;
       }
       else if(x > secondlarge && x!=largest){
           secondlarge = x;
       }
       }
       if(secondlarge == INT_MIN){
           return -1;
       }
        return secondlarge;
        }
};