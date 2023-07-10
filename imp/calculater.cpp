#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, res;

    cout << "Enter number1 - ";
    cin >> num1;
    cout << "Enter operator(+, -, *, /) - ";
    cin >> op;
    cout << "Enter number2 - ";
    cin >> num2;

    switch(op) {
        case '+':
            res = num1 + num2;
            cout << "Result = " << res;
            break;
        case '-':
            res = num1 - num2;
            cout << "Result = " << res;
            break;
        case '*':
            res = num1 * num2;
            cout << "Result = " << res;
            break;
        case '/':
            if (num2 != 0) {
                res = num1 / num2;
                cout << "Result = " << res;
            } else {
                cout << "Error: Division by zero.";
            }
            break;
        default:
            cout << "Error: Invalid operator.";
            break;
    }

    return 0;
}
