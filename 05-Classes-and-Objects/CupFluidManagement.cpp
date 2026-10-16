//
//
#include "apex_code.h"

double Cup::capacityInMls() const {
    // Volume of a truncated cone = (1/3) * π * h * (r1^2 + r1*r2 + r2^2)
    double h = HeightCms;
    double r1 = BottomRadiusCms;
    double r2 = TopRadiusCms;
    double volumeCm3 = (M_PI / 3.0) * h * (r1 * r1 + r1 * r2 + r2 * r2);
    return volumeCm3; // 1 cm^3 = 1 mL
}

bool addFluid(Cup * cup, double mls) {
    double newAmount = cup->AmountOfFluid + mls;
    if (newAmount < 0 || newAmount > cup->capacityInMls()) {
        return false;
    }
    cup->AmountOfFluid = newAmount;
    return true;
}

double howFull(const Cup & cup) {
    double capacity = cup.capacityInMls();  
    if (capacity == 0) return 0.0; 
    //returned the percentage of capacity by multiplying by 100.0
    return cup.AmountOfFluid / capacity * 100.0;
}

bool mlPerDollar(const Cup & cup, double pricePerDrink, double & output) {
    if (pricePerDrink <= 0) {
        return false;
    }
    output = cup.capacityInMls() / pricePerDrink;
    return true;
}
