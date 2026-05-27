#include <iostream>
using namespace std;

int main() {
    // outer loop for rows
    for (int i = 1; i <= 10; i++) {
        // inner loop for columns
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t"; // print multiplication
        }
        cout << endl; // move to next row
}

  return 0;}

