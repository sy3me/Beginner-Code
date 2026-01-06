#include <iostream>

int main(){
    std::string gachaCharacters[][3] = {{"Neuvilette", "Furina", "Ganyu"},
                                        {"Cartethiya", "Augusta", "Calcharro"},
                                        {"Castorice", "Hyacine", "Firefly"}};
    
    int rowsGames = sizeof(gachaCharacters)/sizeof(gachaCharacters[0]);
    int columnsCharacters = sizeof(gachaCharacters[0])/sizeof(gachaCharacters[0][0]);

    std::cout << "The Gacha Characters listed are:\n";

    for (int i = 0; i < rowsGames; i++){
        for (int j = 0; j < columnsCharacters; j++){
            std::cout << gachaCharacters[i][j] << " ";
        }
     std::cout << '\n';
    }

    return 0;
}