//talha tufail
// etea id :5121405

#include <iostream>
using namespace std;

int main()
{
    // Declare variables for resistance, voltage and current
    float resistance, voltage, current;

    // Initialize variables
    resistance = 0;
    voltage = 0;
    current = 0;

    // Ask user to enter voltage
    cout << "Enter voltage (V): ";
    cin >> voltage;

    // Ask user to enter current
    cout << "Enter current (I): ";
    cin >> current;

    // Calculate resistance using Ohm's Law
    resistance = voltage / current;

    // Display all values
    cout << "Voltage = " << voltage << endl;
    cout << "
