#include <iostream>
using namespace std;

//define a Node 

struct Node {
	int data;
	Node*next;
	Node(int val) : data(val), next(NULL) {}
};
//Function to reverse the list 

Node* reverseList(Node* head) {
	Node* prev = NULL;
	Node* curr = head;
	Node* next = NULL;
	while (curr != NULL) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev; 
}
//Function to print the list 

void printList(Node* head) {
	while (head != NULL) {
		cout << head->data <<" ";
		head = head->next;
	}
	cout << endl;
}
int main() {
	// Creat list 
	Node* head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	head->next->next->next->next = new Node(5);
	
	cout << "Original list: ";
	printList(head);

	head = reverseList(head);
	cout << "Reverse list: ";
	printList(head);
	return 0;
}
