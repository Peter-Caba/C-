/*Peter Caba 
C++ 141*/
#include <iostream>
using namespace std;

bool isValid(int number) {
    if (number >= 1 && number <= 100) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;


    if (isValid(num)) {
     
        if (num % 2 == 0) {
            cout << num << " is even." << endl;
        } else {
            cout << num << " is odd." << endl;
        }
    } else {
        cout << "Please enter a number between 1 and 100." << endl;
    }

    return 0;}
