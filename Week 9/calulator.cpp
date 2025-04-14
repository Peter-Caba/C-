#include <iostream>

struct Calculator {
    int num1, num2;
    char operation;

    void calculate() {
        switch (operation) {
            case '+': std::cout << "Result: " << num1 + num2 << "\n"; break;
            case '-': std::cout << "Result: " << num1 - num2 << "\n"; break;
            case '*': std::cout << "Result: " << num1 * num2 << "\n"; break;
            case '/':
                if (num2 != 0) std::cout << "Result: " << num1 / num2 << "\n";
                else std::cout << "Error: Division by zero.\n";
                break;
            default: std::cout << "Error: Invalid operation.\n";
        }
    }
};

int main() {
    Calculator calc;
    std::cout << "Enter first number: ";
    std::cin >> calc.num1;
    std::cout << "Enter second number: ";
    std::cin >> calc.num2;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> calc.operation;

    calc.calculate();
    return 0;
}
