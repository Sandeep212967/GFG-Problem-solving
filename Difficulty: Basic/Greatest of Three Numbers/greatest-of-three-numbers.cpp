#include <bits/stdc++.h>
                using namespace std;

                class Solution {
                public:
                    int greatestOfThree(int a, int b, int c) {
                        int greatest = a;

                        if (b > greatest)
                            greatest = b;

                        if (c > greatest)
                            greatest = c;

                        return greatest;
                    }
                };

                int main() {
                    int a, b, c;
                    cin >> a >> b >> c;

                    Solution obj;
                    cout << obj.greatestOfThree(a, b, c);

                    return 0;
                }
