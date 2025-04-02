#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <iomanip>  // For controlling output formatting

class Rectangle
{
private:
    double length;  // Length of the rectangle
    double width;   // Width of the rectangle

public:
    // Constructor to initialize length and width (default to 0 if no values are provided)
    Rectangle(double len = 0.0, double wid = 0.0) 
        : length(len), width(wid) {}

    // Getter for the length of the rectangle
    double getLength() const
    {
        return length;
    }

    // Getter for the width of the rectangle
    double getWidth() const
    {
        return width;
    }

    // Setter for the length of the rectangle
    void setLength(double len)
    {
        if (len > 0)  // Make sure the length is positive
        {
            length = len;
        }
        else
        {
            std::cout << "Please enter a valid length greater than 0.\n";
        }
    }

    // Setter for the width of the rectangle
    void setWidth(double wid)
    {
        if (wid > 0)  // Make sure the width is positive
        {
            width = wid;
        }
        else
        {
            std::cout << "Please enter a valid width greater than 0.\n";
        }
    }

    // Method to calculate the area of the rectangle
    double getArea() const
    {
        return length * width;  // Area = length * width
    }

    // Method to display the rectangle's dimensions and area in a user-friendly format
    void display() const
    {
        std::cout << "Rectangle dimensions: " 
                  << "\nLength: " << length 
                  << " meters"
                  << "\nWidth: " << width 
                  << " meters"
                  << "\nArea: " << std::fixed << std::setprecision(2) << getArea() 
                  << " square meters\n";
    }
};

#endif
