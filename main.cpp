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
void explainQueue() {
std::queue<int> q;
q.push(1); // {1}
q.push(2); // {1, 2}
q.emplace(4); // {1, 2, 4}
q.back() += 5;
std::cout << q.back(); // prints 9
// Q is {1,2,9}
std::cout << q.front();
 // prints 1
q.pop(); // 1// {2, 9}
std::cout << q.front(); }// prints 2
// size swap empty same as stack
int main(){
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