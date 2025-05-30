#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:

    Book(const std::string& isbn = "", const std::string& author = "", const std::string& title = "",
         int edition = 0, const std::string& pubCode = "", double price = 0.0)
        : isbn(isbn), author(author), title(title), edition(edition), pubCode(pubCode), price(price) {}


    std::string getISBN() const { return isbn; }
    std::string getAuthor() const { return author; }
    std::string getTitle() const { return title; }
    int getEdition() const { return edition; }
    std::string getPubCode() const { return pubCode; }
    double getPrice() const { return price; }

    void changePrice(double newPrice) { price = newPrice; }

private:
    std::string isbn;
    std::string author;
    std::string title;
    int edition;
    std::string pubCode;
    double price;
};

#endif 