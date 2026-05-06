#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (op == '+')
        cout << "Result = " << num1 + num2 << endl;
    else if (op == '-')
        cout << "Result = " << num1 - num2 << endl;
    else if (op == '*')
        cout << "Result = " << num1 * num2 << endl;
    else if (op == '/')
        cout << "Result = " << num1 / num2 << endl;
    else
        cout << "Invalid operator!" << endl;

    return 0;
}
