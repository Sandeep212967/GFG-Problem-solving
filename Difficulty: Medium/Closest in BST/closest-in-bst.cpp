/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int minDiff(Node *root, int k) {
        // code here
        int ans = INT_MAX;

              while (root) {
                  ans = min(ans, abs(root->data - k));

                  if (k < root->data)
                      root = root->left;
                  else if (k > root->data)
                      root = root->right;
                  else
                      return 0;
              }

              return ans;
    }
};
