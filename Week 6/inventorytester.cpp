#include <iostream>
#include "Inventory.h"
#include "Book.h"

void addBookToInventory(Inventory& inventory, const Book& book) {
    std::cout << (inventory.addBook(book) ? "Book added." : "Failed to add book.") << std::endl;
}

int main() {
    Inventory inventory(10);

    // Book data
    Book books[] = {
        {"013478796X", "Tony Gaddis", "Starting Out With Java", 4, "PE", 118.00},
        {"0321409493", "John Lewis", "Java Software Solutions", 5, "AW", 94.00},
        {"0134743350", "Harvey Deitel", "Java How to Program", 12, "PE", 135.00},
        {"002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00},
        {"1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 40.00},
        {"0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 18.00}
    };

    // Add books to inventory
    for (const auto& book : books) addBookToInventory(inventory, book);

    inventory.printInventory();

    // Change prices
    inventory.changePrice("013478796X", 50.00);
    inventory.changePrice("0143067889", 9.95);
    inventory.changePrice("0134743350", 100.00);

    // Print updated inventory
    inventory.printInventory();

    return 0;
}
