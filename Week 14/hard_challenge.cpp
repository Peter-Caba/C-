#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int roll(int max) { return rand() % max + 1; }

bool is_hit(int atk, int def) { return atk > def; }

int main() {
	srand(static_cast<unsigned>(time(0)));

	int ObiHP = 20, MaulHP = 20, ObiDef = roll(3), MaulDef = roll(3);
	int ObiWins = 0, MaulWins = 0;

	cout << "⚔️  Obi-Wan vs. Darth Maul Duel Begins!\n";

	for (int round = 1; round <= 5; ++round) {
		cout << "\nRound " << round << ":\n";

		if (is_hit(roll(15), roll(3) + MaulDef)) {
			--MaulHP;
			cout << "Obi-Wan lands a hit! Maul HP: " << MaulHP << "\n";
		} else {
			cout << "Maul blocks Obi-Wan's attack.\n";
		}

		if (is_hit(roll(15), roll(3) + ObiDef)) {
			--ObiHP;
			cout << "Maul strikes back! Obi-Wan HP: " << ObiHP << "\n";
		} else {
			cout << "Obi-Wan deflects the attack.\n";
		}

		if (ObiHP > MaulHP) ++ObiWins;
		else if (MaulHP > ObiHP) ++MaulWins;
		else cout << "Draw this round.\n";
	}

	cout << "\n🏁 Duel Over! Obi-Wan won " << ObiWins << ", Maul won " << MaulWins << ".\n";
	cout << (ObiWins > MaulWins ? "Obi-Wan is victorious!\n" : 
	        (MaulWins > ObiWins ? "Maul emerges victorious!\n" : 
	        "It's a draw!\n"));

	return 0;
}
