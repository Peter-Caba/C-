#include <iostream>
#include <thread>
#include <chrono>

int main() {
    std::cout << "Alright Chewie, prep the ship—we're about to hit hyperspace!\n";

    for (int i = 5; i > 0; --i) {
        std::cout << "Engaging in " << i << "...\n";
        std::this_thread::sleep_for(std::chrono::seconds(1)); 
    }

    std::cout << "Now, R2—hit the hyperdrive!\n";
    std::cout << "*Stars blur as we shoot across the galaxy*\n";

    return 0;
}
