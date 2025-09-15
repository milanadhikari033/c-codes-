/*
#include <iostream>
using namespace std;
struct node 
{
    int data;
    node* next;
};

int main() {
    node* head = NULL;
    node* temp = NULL;
    node* newnode = NULL;

    int n;
    cout << "How many nodes do you want to enter? ";
    cin >> n;

    for (int i = 0; i < n; i++) 
	{
        newnode = new node;
        if (newnode == NULL) 
		{
            cout << "Memory allocation failed!" << endl;
            return 1;
        }

        cout << "Enter data for node " << i + 1 << ": ";
        cin >> newnode->data;
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    cout << "Linked list data: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free memory
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

*/
#include<iostream>
using namespace std;
void toh(int n , char from ,char to ,char temp)
{
	if(n>0)
	{
		toh(n-1,from, temp,to);
		cout<<"Move the disk  "<<n<<" from "<<from<<" to "<<to<<endl;
		toh(n-1,temp,from,to);
		
	}
	else
	{
		cout<<"Enter the number greater than zero"<<endl;
		
	}
}
int main()
{
	int  n;
	cout<<"Enter the number of the desk"<<endl;
	cin>>n;
	toh(n,'A','B','C');
	return 0;
}
