class Solution {
  public:
    string sortString(string &s) {
        // code here
        int freq[26] = {0};

               // Count frequency of each character
               for (char c : s) {
                   freq[c - 'a']++;
               }

               string ans = "";

               // Build sorted string
               for (int i = 0; i < 26; i++) {
                   while (freq[i]--) {
                       ans += char('a' + i);
                   }
               }

               return ans;
    }
};