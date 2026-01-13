
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> names = {"GSoC", "KDE", "VLC"};

    // Case A: No reference
    for (std::string n : names) {
        n = "Hacked"; 
    }
    std::cout << "Case A first element: " << names[0] << std::endl;

    // Case B: Using a reference
    for (std::string& n : names) {
        n = "Hacked";
    }
    std::cout << "Case B first element: " << names[0] << std::endl;

    return 0;
}