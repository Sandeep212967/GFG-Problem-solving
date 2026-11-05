class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int gcd = __gcd(a, b);

              int lcm = (a / gcd) * b;

              return {lcm, gcd};
              
    }
};