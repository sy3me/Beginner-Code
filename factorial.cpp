#include <iostream>

int factorial(int number);

int main(){
    int inputNumber;

    std::cout << "#######Factorial Calculator#######\nPlease enter in an positive non-zero integer\n";
    std::cin >> std::ws >> inputNumber;
    if (inputNumber > 0){
        std::cout << "The factorial of " << inputNumber << " is " << factorial(inputNumber) << '\n';
    } else{
        std::cout << "Please enter in a non-zero positive number!\n";
    }

    return 0;
}

int factorial(int number){
    if (number > 1){
        return number * factorial(number - 1);
    } else{
        return 1;
    }
}