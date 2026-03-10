// talha tufail
// etea id:5121405

#include <iostream>
using namespace std;

int main()
{
	
    // Declare variables
    float u, v, a, t;

    // Initialize variables
    u = 0;
    v = 0;
    a = 0;
    t = 0;

    // Ask user to enter initial velocity
    cout << "Enter initial velocity (u): ";
    cin >> u;

    // Ask user to enter acceleration
    cout << "Enter acceleration (a): ";
    cin >> a;

    // Ask user to enter time
    cout << "Enter time (t): ";
    cin >> t;

    // Calculate final velocity
    v = u + (a * t);

    // Display all values
    cout << "Initial velocity = " << u << endl;
    cout << "Acceleration = " << a << endl;
    cout << "Time = " << t << endl;
    cout << "Final velocity = " << v << endl;

    return 0;
}
