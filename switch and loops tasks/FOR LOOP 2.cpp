//TALHA TUFAIL
//5121405

#include <iostream>
using namespace std;

int main() {
    int sum = 0; // variable to store sum
    int num;     // variable to store user input

    // for loop runs 5 times
    for(int i = 1; i <= 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;     // get number from user
        sum += num;     // add number to sum
    }

    cout << "Total sum is: " << sum << endl;
    return 0;
}
