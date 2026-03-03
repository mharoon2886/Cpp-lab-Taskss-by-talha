//TALHA TUFAIL
//5121405

#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;

    cout << "Enter a number: ";
    cin >> num;

    // Loop to print table from 1 to 10
    while(i <= 10)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;   // Increase value of i
    }

    return 0;
}
