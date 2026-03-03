//TALHA TUFAIL
//5121405


#nclude <iostream>

using namespace std;

int main() {
    int marks;

    // Ask user to enter marks
    cout << "Enter your marks (out of 100): ";
    cin >> marks;

    // Assign grade using if-else
    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 75) {
        cout << "Grade: A" << endl;
    } else if (marks >= 60) {
        cout << "Grade: B" << endl;
    } else if (marks >= 40) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}



