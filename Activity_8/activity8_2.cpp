//* CODE BY CARLOS TABANGAY
//* BSCS-2D

#include <iostream>
using namespace std;
struct Node { 
  int data; 
  struct Node *previous; 
  struct Node *next; 
};

struct Node* head = NULL; 
void insertNode(int newdata) { 
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)); 
  newNode->data  = newdata; 
  newNode->previous = NULL; 
  newNode->next = head;     
  if(head !=  NULL) 
    head->previous = newNode ;     
    head = newNode; 
}

void display() { 
  struct Node* pointer;
  pointer = head;  
  while(pointer != NULL) { 
    cout<< pointer->data <<" "; 
    pointer = pointer->next; 
  } 
}

int main() { 
  insertNode(8);
  insertNode(5);
  insertNode(7);
  insertNode(9);
  insertNode(1);

  cout<<"Doubly linked list: ( ";
  display();
  cout << ")";

  return 0; 
}