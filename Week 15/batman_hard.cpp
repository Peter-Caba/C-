#include <iostream>
#include <utility> // for std::swap

void displayGadgets(const std::string& g1, const std::string& g2) {
    std::cout << "🔧 Utility Belt Loadout:\n";
    std::cout << " - Primary: " << g1 << "\n";
    std::cout << " - Secondary: " << g2 << "\n\n";
}

int main() {
    std::string gadget1 = "Batarang";
    std::string gadget2 = "Grappling Hook";

    std::cout << " Batman checks his gear before heading out:\n";
    displayGadgets(gadget1, gadget2);

    std::cout << " Reconfiguring loadout...\n\n";
    std::swap(gadget1, gadget2);

    std::cout << " New gadget order ready:\n";
    displayGadgets(gadget1, gadget2);

    return 0;
}
