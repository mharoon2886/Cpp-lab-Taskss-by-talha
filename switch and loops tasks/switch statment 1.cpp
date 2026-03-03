#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks (0-100): ";
    cin >> marks;

    switch(marks / 10) {  // Divide by 10 to simplify ranges
        case 10:
        case 9:
            cout << "Grade: A+"; break;
        case 8:
            cout << "Grade: A"; break;
        case 7:
            cout << "Grade: B"; break;
        case 6:
            cout << "Grade: C"; break;
        case 5:
            cout << "Grade: D"; break;
        default:
            cout << "Grade: F"; 
    }

    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero." << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
