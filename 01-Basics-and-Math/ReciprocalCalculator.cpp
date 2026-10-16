
/*
 * Reciprocal Calculator
 *
 * Calculates the reciprocal of a number
 * entered by the user.
 *
 * Concepts: Variables, user input,
 * division, conditionals, and output formatting.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double inputVolume;
    double reciprocalValue;

    cout << "Enter Volume: ";
    cin >> inputVolume;

    if (inputVolume == 0) {
        cout << "Cannot divide by zero." << endl;
        return 1;
    }

    reciprocalValue = 1.0 / inputVolume;

    cout << "The reciprocal of volume = 1 / "
         << fixed << setprecision(3)
         << inputVolume << " = "
         << reciprocalValue << endl;

    return 0;
}
