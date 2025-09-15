/*#include<iostream>
using namespace std;
int main()
{
    int a ,b,sum;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    sum=a+b;
    cout<<"The sum of the two numbers="<<sum<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main() {
    string input;
    cout << "Type something: ";
    cin >> input;
    cout << "You typed: " << input << endl;
    return 0;
}
*/
#include <iostream>
using namespace std;

int main()
 {
    int n;
    char op;
    char choice;

    do {
        cout << "\nEnter operator (+, -, *, /): ";
        cin >> op;

        cout << "How many numbers do you want to enter? ";
        cin >> n;

        if (n < 2) {
            cout << "You must enter at least 2 numbers." << endl;
            continue;
        }

        double num, result;

        cout << "Enter number 1: ";
        cin >> result; // start from the first number

        for (int i = 2; i <= n; i++) {
            cout << "Enter number " << i << ": ";
            cin >> num;

            switch(op) {
                case '+':
                    result += num;
                    break;
                case '-':
                    result -= num;
                    break;
                case '*':
                    result *= num;
                    break;
                case '/':
                    if (num != 0)
                        result /= num;
                    else {
                        cout << "Error: Division by zero!" << endl;
                        i--; // repeat input
                    }
                    break;
                default:
                    cout << "Invalid operator!" << endl;
                    i = n + 1; // exit loop
                    break;
            }
        }

        cout << "Result: " << result << endl;

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    cout << "Calculator is turned off. Thank you!" << endl;

    return 0;
}


