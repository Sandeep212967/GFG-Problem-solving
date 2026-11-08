/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* newNode = new Node(x);

             // If linked list is empty
             if (head == NULL) {
                 return newNode;
             }

             Node* temp = head;

             // Traverse to the last node
             while (temp->next != NULL) {
                 temp = temp->next;
             }

             // Insert new node at the end
             temp->next = newNode;

             return head;
    }
};