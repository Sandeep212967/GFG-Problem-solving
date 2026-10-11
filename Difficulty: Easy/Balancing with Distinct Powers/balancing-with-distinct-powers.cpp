class Solution {
  public:
    bool balancePan(int a, int b) {
        // code here
     while (b > 0) {
                int r = b % a;

                if (r == 0) {
                    b /= a;
                }
                else if (r == 1) {
                    b = (b - 1) / a;
                }
                else if (r == a - 1) {
                    b = (b + 1) / a;
                }
                else {
                    return false;
                }
            }

            return true;
    }
};