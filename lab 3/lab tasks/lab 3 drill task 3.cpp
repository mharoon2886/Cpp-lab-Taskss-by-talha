#include <iostream>
using namespace std;

int main()
{
    // Rectangle ke variables
    float length = 0;
    float width = 0;
    float area = 1;
    float perimeter = 1;

    // User se length aur width lena
    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    // Area calculate karna
    area = length * width;

    // Perimeter calculate karna
    perimeter = 2 * (length + width);

    // Results display karna
    cout << "\nArea of Rectangle = " << area << endl;
    cout << "Perimeter of Rectangle = " << perimeter << endl;

    return 0;
}
