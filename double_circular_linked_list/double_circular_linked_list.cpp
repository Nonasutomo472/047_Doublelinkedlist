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

