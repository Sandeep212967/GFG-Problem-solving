class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        long long D = 1LL * b * b - 4LL * a * c;

               if (D < 0)
                   return {-1};

               double root1 = (-b + sqrt(D)) / (2.0 * a);
               double root2 = (-b - sqrt(D)) / (2.0 * a);

               int r1 = floor(root1);
               int r2 = floor(root2);

               if (r1 < r2)
                   swap(r1, r2);

               return {r1, r2};
    }
};