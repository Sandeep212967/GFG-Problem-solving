class Solution {
  public:
    double power(double b, int e) {
        // code here
         long long exp = e;
        if(exp<0){
            b=1/b;
            exp=-exp;
        }
        double ans=1;
        while(exp > 0){
            if(exp%2==1){
            ans=ans*b;
            }
            b=b*b;
            exp=exp/2;
        }
        return ans;
    }
};