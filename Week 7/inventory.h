#include <iostream>
#include "book.h"
#pragma once
#include <string>
#include <iomanip>

class Inventory {
private:
    Book* books;
    int nextEntry, maxSize;

public:
    Inventory(int size) : maxSize(size), nextEntry(0) {
        books = new Book[maxSize];
    }

    ~Inventory() {
        delete[] books;
    }

    bool addBook(const Book& newBook) {
        if (nextEntry >= maxSize) {
            std::cout << "Inventory full! Cannot add more books.\n";
            return false;
        }

        for (int i = 0; i < nextEntry; i++) {
            if (books[i] == newBook) {
                std::cout << "Duplicate book found: '" << newBook.getTitle() << "'. Not added.\n";
                return false;
            }
        }

        books[nextEntry++] = newBook;
        return true;
    }

    void changePrice(const std::string& isbn, double newPrice) {
        for (int i = 0; i < nextEntry; i++) {
            if (books[i].getISBN() == isbn) {
                books[i].changePrice(newPrice);
                std::cout << "Price updated for ISBN " << isbn << ".\n";
                return;
            }
        }
        std::cout << "No book found with ISBN " << isbn << ".\n";
    }

    void printInventory() {
        if (nextEntry == 0) {
            std::cout << "The inventory is empty.\n";
            return;
        }

        std::cout << "--------------------------------------------------------------\n"
                  << std::left << std::setw(15) << "ISBN"
                  << std::setw(20) << "AUTHOR"
                  << std::setw(40) << "TITLE"
                  << std::setw(5) << "ED"
                  << std::setw(10) << "PUB"
                  << std::setw(10) << "PRICE" << "\n"
                  << "--------------------------------------------------------------\n";

        for (int i = 0; i < nextEntry; i++) {
            std::cout << books[i] << "\n";
        }

        std::cout << "--------------------------------------------------------------\n";
    }
};
