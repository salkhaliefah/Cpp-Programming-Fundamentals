
#include <iostream>
using namespace std;

/*
 * Gas-to-Oil Ratio Calculator
 *
 * Calculates the ratio of gas volume to oil volume
 * based on user input.
 *
 * Concepts: Variables, user input, arithmetic, output.
 */

int main() {
    double gasVolume;
    double oilVolume;
    double mixRatio;

    cout << "Enter gas Volume: ";
    cin >> gasVolume;

    cout << "Enter oilVolume: ";
    cin >> oilVolume;

    mixRatio = gasVolume / oilVolume;

    cout << "Gas and Oil Ratio mix: "
         << mixRatio << ":1" << endl;

    return 0;
}
