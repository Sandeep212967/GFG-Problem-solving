class Solution {
public:
    vector<int> remDuplicate(vector<int>& arr) {
        unordered_set<int> seen;
        vector<int> ans;

        for (int x : arr) {
            if (seen.count(x) == 0) {
                ans.push_back(x);
                seen.insert(x);
            }
        }

        return ans;
    }
};