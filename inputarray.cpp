#include <iostream>

int main(){
    int size;
    std::cout << "How many favourite games would you like to enter in the array?\n";
    std::cin >> size;
    std::cin.clear();
    fflush(stdin);
    std::string favouriteGames[size];

    for (int i = 0; i < size; i++){
        std::string temp;
        std::cout << "Please input favourite game #" << i + 1 << ", or enter 'q' to escape:\n";
        std::getline(std::cin, temp);

        if (temp == "q"){
            break;
        } else if (temp == "Q"){
            break;
        } else{
            favouriteGames[i] = temp;
        }
    }

    std::cout << "You favourite games are:\n";
    for (int i = 0; !favouriteGames[i].empty(); i++){
        std::cout << "#" << i + 1 << " " << favouriteGames[i] << '\n';
    }

    return 0;
}