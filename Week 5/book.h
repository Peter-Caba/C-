#pragma once
#include <string>
#include <iostream>
#include <iomanip> 

class Book {
private:
    std::string author, title, pubCode, codeNum;
    int edition;
    double price;

public:
 
    Book() : edition(0), price(0.0) {}


    Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr)
        : codeNum(cn), author(au), title(ti), edition(ed), pubCode(pc), price(pr) {}


    std::string getCodeNum() const { return codeNum; }
    std::string getAuthor() const { return author; }
    std::string getTitle() const { return title; }
    int getEdition() const { return edition; }
    std::string getPubCode() const { return pubCode; }
    double getPrice() const { return price; }

  
    void setPrice(double newPrice) { price = newPrice; }

  
    void print() const {
        std::cout << std::left << std::setw(12) << codeNum
                  << std::left << std::setw(16) << author
                  << std::left << std::setw(43) << title
                  << std::right << std::setw(5) << edition
                  << std::right << std::setw(8) << pubCode
                  << std::right << std::setw(8) << std::fixed << std::setprecision(2) << price
                  << std::endl;
    }};
