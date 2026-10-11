class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // code here
         arr.insert(arr.begin() + index, val);
    }
};
