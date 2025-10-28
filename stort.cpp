#include <iostream>
using namespace std;

//Define Node 
 struct Node {
	 int data;
	 Node* next;
 };

//Insert node at the end 

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

//Display the list 

void display(Node* head) {
	while (head) {
		cout << head->data <<" ";
		head = head->next;
	}
	cout << endl;
}

//sort the list using Bubble sort  

void sortList(Node* head) {
	if(!head) return;
	bool swapped;
	do {
		swapped = false;
		Node* current = head;
		while (current->next) {
			if (current->data > current->next->data) {
				swap(current->data, current->next->data);
				swapped = true;
			}
			current = current->next;
		}
	} while (swapped);
}

int main() {
	Node* head = nullptr;
	int n, value;

	cout <<"Enter the number of elements: ";
	cin >> n;

	cout <<"Enter" << n << "numbers:\n";
	for (int i = 0; i < n; ++i) {
		cin >> value;
		insert(head, value);
	}

	cout << "Original list: ";
	display(head);

	sortList(head);

	cout << "Sorted list: ";
	display(head);

	return 0;
}
