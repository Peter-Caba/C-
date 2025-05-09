#include <iostream>
#include <string>

int main() {
    int riddleNumber = 7;
    std::string riddleText = "What has roots as nobody sees, is taller than trees...";
    bool solved = true;

    std::cout << " Presenting Riddle #" << riddleNumber << ":\n";
    std::cout << "\"" << riddleText << "\"\n\n";

    std::cout << " Status: " << (solved ? "Solved – Excellent deduction!" : "Unsolved – The mystery remains...") << "\n";

    return 0;
}
