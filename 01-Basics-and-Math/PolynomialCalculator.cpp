
/*
 * Polynomial Calculator
 *
 * Evaluates a quadratic polynomial using
 * a value entered by the user.
 *
 * Formula: q = -1.5x² - 2x - 10
 *
 * Concepts: Variables, arithmetic operations,
 * user input, and output formatting.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x;
    double q;

    cout << "Enter the value for x: ";
    cin >> x;

    q = -1.5 * x * x - 2.0 * x - 10.0;

    cout << "Result of value computed into "
         << "the quadratic function: "
         << fixed << setprecision(3)
         << q << endl;

    return 0;
}
