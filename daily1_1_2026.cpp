//Create a program that takes an integer input representing the number of apples left in a mysterious cellar and prints "You have [number] apples left."
//Example: If the input is 5, the output should be You have 5 apples left.

#include <iostream>

int main(){
    int cellarApples;
    std::cin >> cellarApples;
    std::cout << "You have " << cellarApples << " apples left." << '\n';

    return 0;
}