
//TALHA TUFAIL
//5121405

#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    do
    {
        factorial *= i; // Multiply current i to factorial
        i++;            // Increase i
    } while(i <= num);  // Repeat until i > num

    cout << "Factorial = " << factorial;

    return 0;
}
