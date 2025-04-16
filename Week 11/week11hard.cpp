#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice(int side) {
	return rand() % side + 1;
}

int main() {
	srand(time(0));
	int heroHP = 20, demonHP = 20, heroAtk = 5, demonAtk = 5, round = 1;

	cout << "Combat simulation between Hero and Demon\n";

	while (heroHP > 0 && demonHP > 0) {
		cout << " Round " << round++ << "!\n";

		// Hero's turn
		int dmg = rollDice(heroAtk);
		cout << "Hero rolled a " << dmg << "!\n";
		if (dmg == 1) cout << "Hero missed!\n";
		else {
			demonHP -= dmg;
			cout << "Demon took " << dmg << " damage! Remaining HP: " << demonHP << "\n";
		}
		if (demonHP <= 0) { cout << "Demon has been vanquished! Hero wins!\n"; break; }

		// Demon's turn
		dmg = rollDice(demonAtk);
		cout << "Demon rolled a " << dmg << "!\n";
		if (dmg == 1) cout << "Demon missed!\n";
		else {
			heroHP -= dmg;
			cout << "Hero took " << dmg << " damage! Remaining HP: " << heroHP << "\n";
		}
		if (heroHP <= 0) { cout << "Hero has been defeated! Demon wins!\n"; break; }

		cout << "Both fighters are still standing. Next round...\n";
	}

	return 0;
}
