#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double distance, fuel, spaceship_weight, life_support;
    int crew_size;

    // Collect input from user
    std::cout << "Enter the distance to the planet (in Million Km): ";
    std::cin >> distance;

    std::cout << "Enter the amount of fuel available (in Tons): ";
    std::cin >> fuel;

    std::cout << "Enter the weight of the spaceship (in Tons): ";
    std::cin >> spaceship_weight;

    std::cout << "Enter the life support duration (in Days): ";
    std::cin >> life_support;

    std::cout << "Enter the crew size: ";
    std::cin >> crew_size;

    // Calculate fuel efficiency (percentage)
    double fuel_efficiency = (fuel / spaceship_weight) * 100;

    // Calculate travel speed (km/h)
    double travel_speed = (fuel * 10000) / (crew_size * spaceship_weight);

    // Calculate travel time (in hours)
    double travel_time = (distance * 1000000) / travel_speed;

    // Convert travel time to days (rounded up)
    int travel_days = static_cast<int>(std::ceil(travel_time / 24));

    // Mission viability check
    bool is_viable = (fuel_efficiency >= 20.0) &&
                     (life_support > (travel_days + 10)) &&
                     (crew_size >= 2 && crew_size <= 8) &&
                     (spaceship_weight < 500);

    // Output results with appropriate formatting
    std::cout << std::fixed << std::setprecision(2); // Set precision for floating point numbers
    std::cout << "\nMission Details:\n";
    std::cout << "Fuel efficiency: " << fuel_efficiency << "%\n";
    std::cout << "Travel speed: " << travel_speed << " km/h\n";
    std::cout << "Travel time: " << travel_days << " days\n";

    std::cout << "\nMission viability: " << (is_viable ? "Viable" : "Not Viable") << "\n";
    if (is_viable) {
        std::cout << "Mission is viable. Prepare for takeoff!\n";
    } else {
        std::cout << "Mission is not viable. Abort the mission!\n";
    }

    return 0;
}
