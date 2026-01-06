#include <iostream>

int main() {
    double height;

    std::cout << "What is your height in cm?" << '\n';
    std::cin >> height;

    if (height >= 185) {
        std::cout << "You are tall." << '\n';
    } else if (height>=175) {
        std::cout << "You are pretty tall." << '\n';
    } else if (height>=162) {
        std::cout << "You are pretty average height." << '\n';
    } else {
        std::cout << "Back to Santa's Workshop, it is almost Christmas time!" << '\n';
    }

    return 0;
}