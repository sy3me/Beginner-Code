#include <iostream>

int main(){
    std::cout << "Even or Odd Checker 67 Pro Max" << '\n';

    int num;

    std::cout << "Please enter in your number:" << '\n';
    std::cin >> num;

    num % 2 == 1 ? std::cout << "Your number is odd!" << '\n' : std::cout << "Your number is even!" << '\n';

    std::cout << "----------------------------" << '\n';
    return 0;
}