#include<iostream>
using namespace std;

int main() {
    float x, y;
    char ch;

    cout << "Welcome to Calculator" << endl;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Choose operation (+ - * /): ";
    cin >> ch;

    if (ch == '+') {
        cout << "Answer = " << (x + y) << endl;
    }
    else if (ch == '-') {
        cout << "Answer = " << (x - y) << endl;
    }
    else if (ch == '*') {
        cout << "Answer = " << (x * y) << endl;
    }
    else if (ch == '/') {
        if (y != 0)
            cout << "Answer = " << (x / y) << endl;
        else
            cout << "Divide by zero not allowed!" << endl;
    }
    else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}