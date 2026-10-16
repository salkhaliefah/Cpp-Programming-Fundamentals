

/*
 * Hemisphere Volume Calculator
 *
 * Calculates the volume of a hemisphere
 * using a radius entered by the user.
 *
 * Concepts: Variables, mathematical formulas,
 * user input, and output formatting.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double hemisVolume;
    double hemisRadius;
    const double PI = acos(-1.0);

    cout << "Enter Hemisphere Radius: ";
    cin >> hemisRadius;

    hemisVolume = (2.0 / 3.0) * PI *
                  hemisRadius * hemisRadius * hemisRadius;

    cout << "Hemisphere Volume: "
         << fixed << setprecision(2)
         << hemisVolume << endl;

    return 0;
}

