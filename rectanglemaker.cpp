#include <iostream>

int main(){
    int width;
    int height;
    char symbol;
    std::cout << "Rectangle maker!!\nPlease enter in the width of the rectangle:\n";
    std::cin >> width;
    std::cout << "Please enter in the height of the rectangle:\n";
    std::cin >> height;
    std::cout << "Please enter in a single character to use for creating the rectangle, for example '#':\n";
    std::cin >> symbol;

    std::cout << "Rectangle generated:\n";
    for (int i = 1; i <= height; i++){
        for (int j = 1; j <= width; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }
    

    return 0;
}