/*Peter Caba 
C++ 141*/

#include <iostream>
using namespace std;

    int main() {
    int number;

  
    cout << "Welcome to the Roman Numeral Converter!" << endl;
    cout << "Please enter a number between 1 and 10 to see its Roman numeral: ";

  
    do {
        cin >> number;

        if (number < 1 || number > 10) {
            cout << "Oops! That number is not valid. Please try again with a number between 1 and 10: ";
        }
    } while (number < 1 || number > 10);  

    
    string romanNumeral;
    if (number == 1) romanNumeral = "I";
    else if (number == 2) romanNumeral = "II";
    else if (number == 3) romanNumeral = "III";
    else if (number == 4) romanNumeral = "IV";
    else if (number == 5) romanNumeral = "V";
    else if (number == 6) romanNumeral = "VI";
    else if (number == 7) romanNumeral = "VII";
    else if (number == 8) romanNumeral = "VIII";
    else if (number == 9) romanNumeral = "IX";
    else if (number == 10) romanNumeral = "X";

    cout << "Good Job! The Roman numeral for " << number << " is " << romanNumeral << "." << endl;

    return 0;
    
}
