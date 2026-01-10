#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void actionPlayer(char *spaces, char ticORtac);
void actionComputer(char *spaces, char computer);
bool checkWinner(char *spaces, char ticORtac, char computer);
bool checkTie(char *spaces);

std::string lastPlayed;

int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    
    char ticORtac;
    char computer;
    
    std::cout << "Welcome to Tic Tac Toe-licker!\nWould you like to play as 'X' or 'O'?\n";
    std::cin >> std::ws >> ticORtac;

    ticORtac = toupper(ticORtac);
    if (ticORtac == 'X'){
        computer = 'O';
    } else if (ticORtac == 'O'){
        computer = 'X';
    } else{
        std::cout << "Error! Please only enter 'X' or 'O'!";
    }

    bool running = true;

    std::cout << '\n';
    std::cout << "       |       |       \n";
    std::cout << "   1   |   2   |   3   \n";
    std::cout << "_______|_______|_______\n";
    std::cout << "       |       |       \n";
    std::cout << "   4   |   5   |   6   \n";
    std::cout << "_______|_______|_______\n";
    std::cout << "       |       |       \n";
    std::cout << "   7   |   8   |   9   \n";
    std::cout << "       |       |       \n";
    std::cout << '\n';

    while (running){
        actionPlayer(spaces, ticORtac);
        drawBoard(spaces);
        if (checkWinner(spaces, ticORtac, computer)){
            running = false;
            break;
        } else if(checkTie(spaces)){
            running = false;
            break;
        }
        
        actionComputer(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, ticORtac, computer)){
            running = false;
            break;
        } else if(checkTie(spaces)){
            running = false;
            break;
        }
        }

    std::cout << "Thanks for playing!\n";

    return 0;
}

void drawBoard(char *spaces){
    char area1 = (spaces[0] == ' ') ? '1' : spaces[0];
    char area2 = (spaces[1] == ' ') ? '2' : spaces[1];
    char area3 = (spaces[2] == ' ') ? '3' : spaces[2];
    char area4 = (spaces[3] == ' ') ? '4' : spaces[3];
    char area5 = (spaces[4] == ' ') ? '5' : spaces[4];
    char area6 = (spaces[5] == ' ') ? '6' : spaces[5];
    char area7 = (spaces[6] == ' ') ? '7' : spaces[6];
    char area8 = (spaces[7] == ' ') ? '8' : spaces[7];
    char area9 = (spaces[8] == ' ') ? '9' : spaces[8];
    
    std::cout << '\n';
    std::cout << "       |       |       \n";
    std::cout << "   " << area1 << "   |   " << area2 << "   |   " << area3 << "   \n";
    std::cout << "_______|_______|_______\n";
    std::cout << "       |       |       \n";
    std::cout << "   " << area4 << "   |   " << area5 << "   |   " << area6 << "   \n";
    std::cout << "_______|_______|_______\n";
    std::cout << "       |       |       \n";
    std::cout << "   " << area7 << "   |   " << area8 << "   |   " << area9 << "   \n";
    std::cout << "       |       |       \n";
    std::cout << '\n';
}

void actionPlayer(char *spaces, char ticORtac){
    int areaChoice;
    
    do{
        std::cout << "Please enter in a position to place your '" << ticORtac << "' from 1-9:\n";
        std::cin >> std::ws >> areaChoice;
    } while (areaChoice < 1 || areaChoice > 9);
    areaChoice--;
    if (spaces[areaChoice] == ' '){
        spaces[areaChoice] = ticORtac;
    }

    lastPlayed = "player";
}

void actionComputer(char *spaces, char computer){
    int areaChoice;
    srand(time(0));
    
    while(true){
        areaChoice = rand() % 9;
        if (spaces[areaChoice] == ' '){
            std::cout << "Computer move:";
            spaces[areaChoice] = computer;
            break;
        }
    }
    lastPlayed = "computer";
}

bool checkWinner(char *spaces, char ticORtac, char computer){
    //forgive my if elif
    //Horizontal wins:
    if ((spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]) || (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]) || (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])){
        if (lastPlayed == "player"){
            std::cout << "\nYou won!\n";
        } else{
            std::cout << "\nYou have lost!\n";
        }
        return true;
    }

    //Vertical wins:
    else if ((spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]) || (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]) || (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])){
        if (lastPlayed == "player"){
            std::cout << "\nYou won!\n";
        } else{
            std::cout << "\nYou have lost!\n";
        }
        return true;
    }

    //Diagonal wins:
    else if ((spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]) || (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])){
        if (lastPlayed == "player"){
            std::cout << "\nYou won!\n";
        } else{
            std::cout << "\nYou have lost!\n";
        }
        return true;
    }

    else{
        return false;
    }
}

bool checkTie(char *spaces){
    int countnoSpace = 0;
    for (int i = 0; i < 8; i++){
        if (spaces[i] != ' '){
            countnoSpace++;
        }
    }
    if (countnoSpace == 9){
        std::cout << "\nIt's a tie! gg\n";
        return true;
    } else{
        return false;
    }
}