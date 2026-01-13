#include <iostream>

int main() {
    int score = 200;
    int* ptr = &score;
    int** double_ptr = &ptr;

    std::cout << "Value of the score: " << score << std::endl;
    std::cout << "Value using single pointer: " << *ptr << std::endl;
    std::cout << "Value using double pointer: " << **double_ptr << std::endl;
    return 0;
}