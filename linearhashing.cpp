#include <iostream>
#define SIZE 15
using namespace std;
int main() 

{
    int table[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        table[i] = -1;
    }

    int n;
    cout << "How many numbers? ";
    cin >> n;
    for (int i = 0; i < n; i++)
	 {
        int value;
        cout << "Enter number " << i + 1 << ": ";
        cin >> value;

        int index = value % SIZE;
        if (table[index] == -1)
		 {
            table[index] = value;
        } else
		 {
            cout << "Collision at index " << index
                 << "! Ignoring " << value << endl;
        }
    }

    
    cout << "\nFinal Hash Table:\n";
    for (int i = 0; i < SIZE; i++)
	 {
        if (table[i] == -1)
            cout << "[" << i << "] -> NULL" << endl;
        else
            cout << "[" << i << "] -> " << table[i] << endl;
    }

    return 0;
}

