#include <iostream>

using  namespace std;

struct Node {
int data;
Node*next;
};

//creating a Node 
int main() {
Node* head = new Node();
Node* second = new Node();
Node* third = new Node();
head->data = 10;
head->next = second;
second->data = 20;
second->next = third;
third->data = 30;
third->next = NULL;


//print 

Node* temp = head;
while (temp != NULL) {
cout <<temp->data <<" ";
temp = temp->next;
}
}
