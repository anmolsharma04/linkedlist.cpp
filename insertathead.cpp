#include <iostream>
using namespace std;

class Node{
public:

int data;
Node*next;


Node(int data) {
this->data = data;
this->next = NULL;
}
};

void insertathead(Node *&head, int d) {
  Node *temp = new Node(d);
  temp->next = head;
  //head updated
  head = temp;
}

// printing linkedlist
void print(Node *&head) {
  // creating a new temp to traverse
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main(){
 Node * node1 = new Node(30);
 Node *head = node1;
 insertathead(head , 20);
 print(head);
 return 0;
}