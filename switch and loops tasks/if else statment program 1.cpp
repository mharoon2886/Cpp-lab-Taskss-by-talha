// TALHA TUFAIL
//5121405

#include <iostream>
using namespace std;

int main() {
    int marks;

    // Ask user to enter marks
    cout << "Enter your marks (out of 100): ";
    cin >> marks;

    // Check pass or fail (passing marks = 40)
    if (marks >= 40) {
        cout << "Congratulations! You passed." << endl;
    } else {
        cout << "Sorry! You failed." << endl;
    }

    return 0;
}
