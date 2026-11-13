class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        // code here
        int count = 0;

              for (int i = 0; i < arr.size(); i++) {
                  if (arr[i] <= x) {
                      count++;
                  }
              }

              return count;
    }
};