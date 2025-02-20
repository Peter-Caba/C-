include <iostream>

class Car {
private:
    std::string owner = "John Doe";
public:
    int year;
    std::string make, model;

    void setOwner(const std::string& name) { owner = name; }
    std::string getOwner() const { return owner; }
};

int main() {
    Car myFirstCar = {2015, "BMW", "X1"};
    std::cout << "Owner before change: " << myFirstCar.getOwner() << "\n";
    myFirstCar.setOwner("Jane Doe");
    std::cout << "Owner after change: " << myFirstCar.getOwner() << "\n";
    return 0;
}
