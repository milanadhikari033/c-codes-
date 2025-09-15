#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node*left;
	struct Node*right;
};
struct Node*createNode(int d)
{
	struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
	 newNode->data = d; 
    newNode->left = NULL; 
    newNode->right = NULL; 
    return newNode; 
}
int main() { 
    // Initialize and allocate memory for tree nodes 
    struct Node* firstNode = createNode(2); 
    struct Node* secondNode = createNode(3); 
    struct Node* thirdNode = createNode(4); 
    struct Node* fourthNode = createNode(5); 
 
    // Connect binary tree nodes 
    firstNode->left = secondNode; 
    firstNode->right = thirdNode; 
    secondNode->left = fourthNode; 
 
    return 0; 
}*/
#include <iostream>
using namespace std;

// Define a node using class
class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    // Constructor
    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

int main() {
    // Creating tree nodes
    Node* root = new Node(1);        // Root node
    root->left = new Node(2);        // Left child
    root->right = new Node(3);       // Right child

    // Output the structure
    cout << "Root: " << root->data << endl;
    cout << "Left child: " << root->left->data << endl;
    cout << "Right child: " << root->right->data << endl;

    return 0;
}

