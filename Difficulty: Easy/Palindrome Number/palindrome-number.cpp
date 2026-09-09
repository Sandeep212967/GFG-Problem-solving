class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        int pal=0;
        int d,m=abs(n);
        while(m>0){
            d=m%10;
            pal=pal*10+d;
            m=m/10;
        }
    return pal==abs(n);
    }
};