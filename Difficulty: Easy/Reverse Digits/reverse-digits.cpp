class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int reverse =0 ;
        int d;
        while (n>0){
            d = n % 10 ;
            reverse= reverse*10 + d ;
            n=n/10;
        }
        return reverse;
    }
};