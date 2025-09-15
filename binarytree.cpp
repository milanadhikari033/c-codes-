#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *left;
	Node*right;

	Node(int value)
	{
		data=value;
		left=right=NULL;
	}
	
};
int main()
{
  Node * root= new Node(3);
  root->left= new Node(4);
  root->right= new Node(5);
  cout<<"Node:"<<root->data<<endl;
  cout<<"Left node:"<<root->left->data<<endl;
  cout<<"Right Node:"<<root->right->data<<endl;
  return 0;
  	
}
