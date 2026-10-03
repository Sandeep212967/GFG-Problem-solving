class Solution {
  public:
    double findArea(int a, int b, int c) {
        // code here
        if (a + b <= c || a + c <= b || b + c <= a)
                  return 0.000;

              double s = (a + b + c) / 2.0;

              double area = sqrt(s * (s - a) * (s - b) * (s - c));

              area = floor(area * 1000) / 1000;

              return area;
    }
};