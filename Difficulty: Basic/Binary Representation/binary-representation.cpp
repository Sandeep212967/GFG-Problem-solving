class Solution {
  public:
    string getBinaryRep(int n) {
        // Code here
          return bitset<32>(n).to_string();
    }
};