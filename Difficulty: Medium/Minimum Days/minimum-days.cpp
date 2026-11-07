
class Solution {
  public:

    bool check(int days, string &s, vector<int> &p) {
        int n = s.size();
        vector<bool> removed(n, false);

        for (int i = 0; i < days; i++) {
            removed[p[i]] = true;
        }

        for (int i = 0; i < n - 1; i++) {
            if (!removed[i] && !removed[i + 1] &&
                s[i] == s[i + 1]) {
                return false;
            }
        }

        return true;
    }

    int getMinimumDays(string &s, vector<int> &p) {
        int n = s.size();

        int low = 0, high = n;
        int ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(mid, s, p)) {
                ans = mid;
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
