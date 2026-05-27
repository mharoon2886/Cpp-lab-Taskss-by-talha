#include <iostream>
using namespace std;

int main()
{
    // Subjects ke marks store karne ke liye variables
    float math = 0, physics = 0, english = 0, programming = 0, islamiat = 0;

    // Average store karne ke liye variable
    float average = 0;

    // User se five subjects ke marks lena
    cout << "Enter marks of Math: ";
    cin >> math;

    cout << "Enter marks of Physics: ";
    cin >> physics;

    cout << "Enter marks of English: ";
    cin >> english;

    cout << "Enter marks of Programming: ";
    cin >> programming;

    cout << "Enter marks of Islamiat: ";
    cin >> islamiat;

    // Average calculate karna
    average = (math + physics + english + programming + islamiat) / 5;

    // Average display karna
    cout << "\nAverage Marks = " << average << endl;

    return 0;
}
