#include <iostream>
#include <string>

int getDigit(int number);
int sumOddDigits(std::string cardNumber);
int sumEvenDigits(std::string cardNumber);

int main(){
    std::string cardNumber;
    int result;

    std::cout << "Please enter in a credit card number to validate (no spaces pls):\n";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0){
        std::cout << "Card number is valid!\n";
    } else{
        std::cout << "Card number is not valid, or was entered incorrectly!\n";
    }

    return 0;
}

int getDigit(int number){
    return number % 10 + (number/10 % 10);
}

int sumOddDigits(std::string cardNumber){
    int sum = 0;
    
    for (int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0'));
    }
    return sum;
}

int sumEvenDigits(std::string cardNumber){
    int sum = 0;
    
    for (int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}