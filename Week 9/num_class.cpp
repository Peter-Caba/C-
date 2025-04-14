#include <iostream>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

int main() {
    Operation op = Operation::Add;

    switch (op) {
        case Operation::Add: std::cout << "Add operation\n"; break;
        case Operation::Subtract: std::cout << "Subtract operation\n"; break;
        case Operation::Multiply: std::cout << "Multiply operation\n"; break;
        case Operation::Divide: std::cout << "Divide operation\n"; break;
    }

    return 0;
}
