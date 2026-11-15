/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* prev = NULL;
              Node* curr = head;

              while (curr != NULL) {
                  Node* nextNode = curr->next;

                  curr->next = prev;

                  prev = curr;
                  curr = nextNode;
              }

              return prev;
    }
};