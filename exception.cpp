#include<iostream>
using namespace std;

int main()
{
    int deno, num, div;

    cout << "Enter numerator" << endl;
    cin >> num;
    if (cin.fail()) {
        string a = "Invalid input for numerator";
        throw a;
    }

    cout << "Enter denominator" << endl;
    cin >> deno;
    if (cin.fail()) {
        string a = "Invalid input for denominator";
        throw a;
    }

    try {
        if (deno == 0) {
            throw 0;  // throwing int for divide-by-zero
        }

        div = num / deno;
        cout << "Division is: " << div << endl;
    }
    catch (int n) {
        cout << "Division by zero is not allowed: " << n << endl;
    }
    catch (string msg) {
        cout << msg << endl;
    }
    catch (...) {
        cout << "Undefined exception occurred" << endl;
    }

    return 0;
}

