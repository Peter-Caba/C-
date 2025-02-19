/*Peter Caba 
C++ 141*/
#include <iostream>
#include <ctime>

std::string toRoman(int num) {
    return (num == 1 ? "I" : num == 2 ? "II" : num == 3 ? "III" : num == 4 ? "IV" : num == 5 ? "V" : 
            num == 6 ? "VI" : num == 7 ? "VII" : num == 8 ? "VIII" : num == 9 ? "IX" : "X");
}

int main() {
    std::srand(std::time(0));
    int secret = (std::rand() % 10) + 1, guess;

    std::cout << "Welcome to the Roman Numeral Guessing Game!\n";
    std::cout << "Guess a number between I and X (Roman numerals). Take your time!\n";
    
    do {
        std::cout << "\nYour guess (I to X): ";
        std::cin >> guess;

        if (guess < secret) std::cout << "Oops, " << toRoman(guess) << " is too low. Try again!\n";
        else if (guess > secret) std::cout << "Oops, " << toRoman(guess) << " is too high. Try again!\n";
    } while (guess != secret);

    std::cout << "Congratulations! The number was " << toRoman(secret) << ". Well done!\n";
    return 0;
}
