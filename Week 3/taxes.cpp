/*Peter Caba 
C++ 141*/

#include <iostream>
#include <string>
#include <sstream>

const double TAX_RATE = 0.06; // 6% sales tax

int main() {
    std::string input;
    
    do {
        std::string description, costStr;
        double cost;
        
        std::cout << "Enter purchase description: ";
        std::getline(std::cin, description);
        
        std::cout << "Enter cost: ";
        std::getline(std::cin, costStr);
        
        std::stringstream(costStr) >> cost;
        double totalCost = cost * (1 + TAX_RATE);
        
        std::cout << "Purchase: " << description << "\nCost before tax: $" << cost 
                  << "\nTotal cost: $" << totalCost << "\nWould you like to continue? (yes/no): ";
        
        std::getline(std::cin, input);} while (input == "yes");
    
    std::cout << "Thank you for shopping!" << std::endl;
    return 0;}
