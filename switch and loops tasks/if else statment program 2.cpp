// TALHA TUFAIL
//5121405

#include <iostream>
using namespace std;

int main() {
    int num;

    // Ask user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Check if number is divisible by 2
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    return 0;
}
