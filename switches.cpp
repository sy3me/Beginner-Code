#include <iostream>
#include <string>

int main(){
    char favSzn;

    std::cout << "Please enter in your favourite Season, Summer = 1, Winter = 2, Autumn = 3, Spring = 4:" << '\n';
    std::cin >> favSzn;

    switch(favSzn){
        case '1':
            std::cout << "Summer is just too hot for me." << '\n';
            break;
        case '2':
            std::cout << "Winter is too cold for me." << '\n';
            break;
        case '3':
            std::cout << "Autumn is a wonderful season, the most peaceful for sure." << '\n';
            break;
        case '4':
            std::cout << "Spring is an amazing season, the most beautiful for sure" << '\n';
            break;
        default:
            std::cout << "Please try again and enter a number from (1-4) to match your favourite season." << '\n';

    }

    return 0;
}
