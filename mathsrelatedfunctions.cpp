#include <iostream>
#include <cmath>
#include <string>

// This program caused me an unreasonable amount of pain, maths wise and coding wise :(

int main() {
    double a;
    double b;
    double c;
    std::string unit;

    std::cout << "What unit are the values in?" << '\n';
    std::cin >> unit;
    std::cout << "What is the value for a?" << '\n';
    std::cin >> a;
    std::cout << "What is the value for b?" << '\n';
    std::cin >> b;

    c = sqrt(pow(b , 2) + pow( a, 2));

    std::cout << "The hypotenuse is " << c << " " << unit << " long." << '\n';

    return 0;
}