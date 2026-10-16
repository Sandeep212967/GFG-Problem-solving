class Solution {
  public:
    int recursivePower(int n, int p) {
        // code here
       long long ans = 1;

           while (p > 0) {
               if (p % 2 == 1) {
                   ans *= n;
               }
               n *= n;
               p /= 2;
           }

           return ans;
    }
};
