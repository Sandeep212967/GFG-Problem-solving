/* Strucutre of a Node in linked list
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        while (head1 != NULL && head2 != NULL) {
                   // Compare corresponding node values
                   if (head1->data != head2->data) {
                       return false;
                   }

                   head1 = head1->next;
                   head2 = head2->next;
               }

               // Both lists must end at the same time
               return (head1 == NULL && head2 == NULL);
    }
};