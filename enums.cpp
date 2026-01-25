#include <iostream>

enum colours {red = 0, pink = 1, blue = 2, orange = 3, brown = 4, yellow = 5, green = 6, purple = 7};

int main(){
    colours favouriteColour = pink;

    switch (favouriteColour){
        case red:
            std::cout << "My favourite colour is red!\n";
            break;
        case pink:
            std::cout << "My favourite colour is pink!\n";
            break;
        case blue:
            std::cout << "My favourite colour is blue!\n";
            break;
        case orange:
            std::cout << "My favourite colour is orange!\n";
            break;
        case brown:
            std::cout << "My favourite colour is brown!\n";
            break;
        case yellow:
            std::cout << "My favourite colour is yellow!\n";
            break;
        case green:
            std::cout << "My favourite colour is green!\n";
            break;
        case purple:
            std::cout << "My favourite colour is purple!\n";
            break;
    }

    return 0;
}