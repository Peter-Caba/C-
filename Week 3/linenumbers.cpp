/*Peter Caba 
C++ 141*/

#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream inFile("maryLamb.txt");
    if (!inFile) {
        std::cerr << "Error: Could not open file!\n";
        return 1;}

    std::string line;
    int lineNumber = 1;
    while (std::getline(inFile, line)) {
        std::cout << lineNumber++ << ": " << line << std::endl;}

    return 0;}
