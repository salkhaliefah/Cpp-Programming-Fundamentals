
/*
 * Sphere Volume Calculator
 *
 * Calculates the volume of a sphere using
 * a radius entered by the user.
 *
 * Concepts: Variables, mathematical formulas,
 * user input, and output formatting.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double sphereVolume;
    double sphereRadius;
    const double PI = acos(-1.0);

    cout << "Enter Sphere Radius: ";
    cin >> sphereRadius;

    sphereVolume = (4.0 / 3.0) * PI *
                   sphereRadius * sphereRadius * sphereRadius;

    cout << "Default Sphere Volume: "
         << sphereVolume << endl;

    cout << "Fixed Sphere Volume: "
         << fixed << setprecision(2)
         << sphereVolume << endl;

    return 0;
}
