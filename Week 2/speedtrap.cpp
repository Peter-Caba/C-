/*Peter Caba 
C++ 141*/
#include <iostream>


int main() {
    int speedLimit;
    double driverSpeed;
    


    std::cout << "Please enter the speed limit: ";
    std::cin >> speedLimit;

    std::cout << "Please enter the driver's speed: ";
    std::cin >> driverSpeed;

    if (driverSpeed > speedLimit) {
        std::cout << "You are speeding! You will receive a speeding ticket." << std::endl;
    } else {
        std::cout << "Your speed is legal. Have a safe drive!" << std::endl;
    }

    return 0;
}