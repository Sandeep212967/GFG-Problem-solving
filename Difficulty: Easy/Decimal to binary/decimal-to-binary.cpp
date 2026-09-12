class Solution {
public:
    string decToBinary(int n) {
        string ans = "";

        while (n > 0) {
            ans += (n % 2) + '0';
            n /= 2;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};