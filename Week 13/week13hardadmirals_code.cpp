#include <iostream>
#include <cmath>
#include <iomanip>

constexpr double PI = 3.14159265358979323846;

// Convert degrees to radians
constexpr double toRadians(double deg) {
    return deg * (PI / 180.0);
}

int main() {
    double x, y, z, thrust, angleDeg, warp;

    // Get user input
    std::cout << "Enter coordinates (X Y Z): ";
    std::cin >> x >> y >> z;

    std::cout << "Enter thrust: ";
    std::cin >> thrust;

    std::cout << "Enter angle (degrees): ";
    std::cin >> angleDeg;

    std::cout << "Enter warp factor: ";
    std::cin >> warp;

    // Calculations
    double angleRad = toRadians(angleDeg);
    double newX = (x + thrust * std::cos(angleRad)) * warp;
    double newY = (y + thrust * std::sin(angleRad)) * warp;
    double newZ = z + (thrust / warp);  

    // Output
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "\nInitial coordinates: (" << x << ", " << y << ", " << z << ")\n";
    std::cout << "New coordinates after hyperspace jump:\n";
    std::cout << "X: " << newX << "\nY: " << newY << "\nZ: " << newZ << "\n";

    return 0;
}
