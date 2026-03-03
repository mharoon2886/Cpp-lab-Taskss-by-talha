//TALHA TUFAIL
//5121405

#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Loop runs until number becomes 0
    while(num != 0)
    {
        num = num / 10;  // Remove last digit
        count++;         // Increase digit counter
    }

    cout << "Total digits = " << count;

    return 0;
}
