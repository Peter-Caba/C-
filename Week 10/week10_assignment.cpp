#include <iostream>
#include <string>

class PowerRangerItem {
public:
    PowerRangerItem(const std::string& name, const std::string& powerType, int charges)
        : name_(name), powerType_(powerType), charges_(charges) {
        std::cout << name_ << " Zord (" << powerType_ << " power) created with " << charges_ << " charges!\n";
    }

    void use() {
        if (charges_ > 0) {
            std::cout << "Power Rangers activate " << name_ << " Zord (" << powerType_ << " power). Charges left: " << --charges_ << '\n';
        } else {
            std::cout << name_ << " Zord is out of energy!\n";
        }
    }

private:
    std::string name_;
    std::string powerType_;
    int charges_;
};

int main() {
    PowerRangerItem zords[] = {
        {"Tyrannosaurus", "Dinosaur", 3},
        {"Dragonzord", "Dragon", 2},
        {"Mastodon", "Mammoth", 1}
    };

    // Each Zord gets used a maximum of 4 times (one for each Power Ranger).
    for (auto& zord : zords) {
        for (int i = 0; i < 4; ++i) {
            zord.use();
        }
    }

    return 0;
}
