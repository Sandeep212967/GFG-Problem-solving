/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        // code here
        Node *ptr=head;
        vector<int> ans;
        while(ptr != NULL){
             ans.push_back(ptr->data);
            ptr=ptr->next;
        }
        return ans;
        
    }
};