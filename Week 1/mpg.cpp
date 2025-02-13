#include <iostream>
#include <iomanip> // For formatting the output

int main() {
    const double KM_PER_MILE = 1.60934;
    const double LITERS_PER_GALLON = 3.78541;

    std::string desc;
    int miles;
    float gallons;

    std::cout << "What's your car's description? ";
    std::getline(std::cin, desc);
    std::cout << "How many miles did you drive? ";
    std::cin >> miles;
    std::cout << "How many gallons of gas did you use? ";
    std::cin >> gallons;

    float mpg = miles / gallons;
    float km = miles * KM_PER_MILE;
    float liters = gallons * LITERS_PER_GALLON;
    float l_per_100km = (liters / km) * 100;

    std::cout << "\nYour " << desc << " stats:\n";
    std::cout << "  - " << miles << " miles, " << gallons << " gallons\n";
    std::cout << "  - " << std::fixed << std::setprecision(2) << mpg << " MPG\n";
    std::cout << "  - " << std::fixed << std::setprecision(2) << l_per_100km << " L/100km\n";

    return 0;
}
