
//TALHA TUFAIL
//5121405
#include <iostream>
using namespace std;

int main()
{
    int num, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    do
    {
        remainder = num % 10;              // Get last digit
        reverse = reverse * 10 + remainder; // Build reverse number
        num = num / 10;                    // Remove last digit
    } while(num != 0);                     // Repeat until number becomes 0

    cout << "Reversed number = " << reverse;

    return 0;
}


