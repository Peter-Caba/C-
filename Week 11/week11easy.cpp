#include <iostream>

int main() {
    int gold = 100, potionPrice = 10, potions;

    std::cout << "🧙‍♂️ Welcome to the Mystic Potion Shop!\n"
              << "You have " << gold << " gold. Potions cost " << potionPrice << " each.\n"
              << "How many would you like to buy? ";
    std::cin >> potions;

    int total = potionPrice * potions;

    if (potions < 0)
        std::cout << "Negative potions? That's some dark magic...\n";
    else if (total > gold)
        std::cout << "Not enough gold! Come back richer.\n";
    else {
        gold -= total;
        std::cout << "You bought " << potions << " potion(s) for " << total << " gold.\n"
                  << "Gold left: " << gold << "\n";
    }

    std::cout << "Safe travels, adventurer!\n";
    return 0;
}
