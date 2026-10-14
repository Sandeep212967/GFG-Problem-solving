class Solution {
  public:
    string findRollOut(string& s, vector<int>& roll) {
        // code here
        int n = s.size();
               int m = roll.size();
               vector<int> cnt(n + 1, 0);

               for (int x : roll) {
                   cnt[x - 1]++;
               }

               int sum = 0;

               for (int i = n - 1; i >= 0; i--) {
                   sum += cnt[i];
                   s[i] = (s[i] - 'a' + sum) % 26 + 'a';
               }

               return s;
    }
};
