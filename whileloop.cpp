#include <iostream>

int main(){
    double ans;

    std::cout << "Solve the equation (1621.4 + 67)/25.2 = \n";
    std::cin >> ans;
    
    while (!(ans == 25.2)){
        std::cout << "Wrong, Please try again!\n";
        std::cin >> ans;
    }
    std::cout << "Yay, Correct!\n";

    return 0;
}