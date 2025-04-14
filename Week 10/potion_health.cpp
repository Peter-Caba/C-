#include <iostream>

void heal(int &hp, int amount) { hp += amount; }
void hurt(int &hp, int damage) { hp -= damage; }

int main() {
    int heroHP = 10;
    std::cout << "Hero's starting HP: " << heroHP << '\n';
    heal(heroHP, 5);
    std::cout << "Hero heals +5 HP. Current HP: " << heroHP << '\n';
    hurt(heroHP, 3);
    std::cout << "Hero takes 3 damage from the dragon. Current HP: " << heroHP << '\n';
    return 0;
}
