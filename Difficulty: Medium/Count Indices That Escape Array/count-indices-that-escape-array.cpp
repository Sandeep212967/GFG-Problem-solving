class Solution {
  public:
    int goodIndices(vector<int> &arr) {
        // code here
        int n = arr.size();
               vector<int> state(n, 0);
               // 0 = unvisited, 1 = visiting, 2 = good, 3 = bad

               function<bool(int)> dfs = [&](int i) -> bool {
                   if (i < 0 || i >= n)
                       return true;

                   if (state[i] == 2)
                       return true;

                   if (state[i] == 3)
                       return false;

                   if (state[i] == 1)
                       return false; // cycle detected

                   state[i] = 1;

                   long long next = (long long)i + arr[i];
                   bool good = dfs((int)next);

                   state[i] = good ? 2 : 3;
                   return good;
               };

               int count = 0;

               for (int i = 0; i < n; i++) {
                   if (state[i] == 0 && dfs(i))
                       count++;
                   else if (state[i] == 2)
                       count++;
               }

               return count;
    }
};