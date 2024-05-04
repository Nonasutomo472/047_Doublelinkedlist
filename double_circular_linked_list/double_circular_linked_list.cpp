#include <iostream>
#include <string>
using namespace std;

struct Node
{
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};
Node* START = NULL;

void addNode() {
    Node* newNode = new Node(); // Step 1: create a new node
    cout << "\nEnter the roll number of the student:";
    cin >> newNode->noMhs; // assign value to the rollNumber field of the new node
    cout << "\nEnter the name of the student:";
    cin >> newNode->name; // assign value to the name field of the new node

    if (START == NULL || newNode->noMhs <= START->noMhs) {
        // Step 2: insert the new node
        if (START != NULL && newNode->noMhs == START->noMhs) {
            cout << "\033[31mDuplicate roll number not allowed\033[0m" << endl;
            return;
        }
        // If the list is empty, make the new node the START
        newNode->next = START; // Step 3: make the new node point to the first node
        if (START != NULL) {
            START->prev = newNode; // Step 4: make the first node point to the new node

        }
    }