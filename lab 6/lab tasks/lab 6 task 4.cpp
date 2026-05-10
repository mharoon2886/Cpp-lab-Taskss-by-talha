include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    // outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; }
    return 0;}

