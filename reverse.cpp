#include <iostream>
using namespace std;

//Node structure 

struct Node {
	int data;
	Node* next;
};

//Function to insert a node at the end 

void insert(Node*& head, int value) {
	Node* newNode = new Node{value, nullptr};
	if (!head) {
	    head = newNode;
	    } else {
		Node* temp = head;
		while (temp->next)
			temp = temp->next;
		temp->next = newNode;
	}
}

//Fuction to reverse the Linked list 

Node* reverseList(Node* head) {
	Node* prev = nullptr;
	Node* current = head;
	while (current) {
		Node* nextNode = current->next;
		current->next = prev;
		prev = current;
		current = nextNode;
	}
	return prev;
}

//function to display the list

void display(Node* head) {
	while (head) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main() {
	Node* head = nullptr;
	int n, value;

	cout <<"Enter the number of elements: ";
	cin >> n;
	cout <<"Enter " << n << "numbers:\n";
	for (int i = 0; i < n; ++i) {
		cin >> value;
		insert(head, value);
	}
	cout << "Original list: " ;
	display(head);

	head = reverseList(head);

	cout << "Reversed List: ";
	display(head);

	return 0;
}

