Task 3:
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    // calculate sum from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i; // add each number}
    
   cout << "Sum = " << sum << endl;

    return 0;}

