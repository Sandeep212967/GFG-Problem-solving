class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        m = abs(m);

           int rem = n % m;

           int a = n - rem;
           int b;

           if (n >= 0)
               b = a + m;
           else
               b = a - m;

           if (abs(n - a) < abs(n - b))
               return a;
           else if (abs(n - a) > abs(n - b))
               return b;
           else
               return abs(a) > abs(b) ? a : b;
    }
};