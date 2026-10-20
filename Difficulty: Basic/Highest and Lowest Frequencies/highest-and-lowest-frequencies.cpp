class Solution {
  public:
    int findDiff(vector<int>& arr) {
        // code here
        unordered_map<int, int> freq;

            for (int x : arr) {
                freq[x]++;
            }

            int highest = 0;
            int lowest = arr.size();

            for (auto &p : freq) {
                highest = max(highest, p.second);
                lowest = min(lowest, p.second);
            }

            return highest - lowest;
    }
};