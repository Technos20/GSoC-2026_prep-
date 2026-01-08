#include <iostream>
#include <string>
#include <vector>

bool isValidOrg(std::string org) {
    std::vector<std::string> approvedOrgs = {"VideoLAN", "Blender", "KDE", "CERN"};
    for (const auto& valid : approvedOrgs) {
        if (org == valid) return true;
    }
    return false;
}

int main() {
    std::string myChoice;
    std::cout << "Enter a GSoC Organization: ";
    if (!(std::cin >> myChoice)) return 0;

    if (isValidOrg(myChoice)) {
        std::cout << "Target Locked: " << myChoice << " is a great choice!" << std::endl;
    } else {
        std::cout << "Warning: " << myChoice << " not in your primary list." << std::endl;
    }
    return 0;
}