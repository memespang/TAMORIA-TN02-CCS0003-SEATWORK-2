#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter the operator(+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "The result of the operation is: " << num1 + num2;
            break;
        case '-':
            cout << "The result of the operation is: " << num1 - num2;
            break;
        case '*':
            cout << "The result of the operation is: " << num1 * num2;
            break;
        case '/':
            cout << "The result of the operation is: " << num1 / num2;
            break;
        default:
            cout << "Please enter a valid operator!";
            break;
    }
    return 0;
}
