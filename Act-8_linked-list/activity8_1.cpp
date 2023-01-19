//* CODE BY CARLOS TABANGAY
//* BSCS-2D

#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node* head = NULL;
void insertNode(int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void displayNodes () {
    struct Node* pointer;
    pointer = head;
    while (pointer != NULL) {
        cout<< pointer->data <<" -> ";
        pointer = pointer->next;
    }
    cout << "NULL";
}

int main() {
  // Insert Items
  insertNode(1);
  insertNode(2);
  insertNode(3);
  insertNode(4);
  insertNode(5);

  cout << "Single Linked List: ( ";
  displayNodes();
  cout << " )";

  return 0;
}