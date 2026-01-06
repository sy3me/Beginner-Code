#include <iostream>
#include <ctime>

char getplayerChoice();
char getcomputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
   
    std::cout << "Welcome to Scissors Paper Rock!\n############################\nPlease enter 's' for Scissors, 'p' for Paper, or 'r' for Rock:\n";
    
    char player = getplayerChoice();

    std::cout << "You chose ";
    showChoice(player);

    char computer = getcomputerChoice();

    std::cout << "The computer chose ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getplayerChoice(){
    char pChoice;
    std::cin >> pChoice;
    return pChoice;
}

char getcomputerChoice(){
    srand(time(0));
    int cChoice = rand() % 3 + 1;
    switch (cChoice){
        case 1:
            return 's';
        case 2:
            return 'p';
        case 3:
            return 'r';
        default:
            return '6';
    }
}

void showChoice(char choice){
    switch (choice){
        case ('s'):
            std::cout << "Scissors!\n";
            break;
        case ('p'):
            std::cout << "Paper!\n";
            break;
        case ('r'):
            std::cout << "Rock!\n";
            break;
        case ('S'):
            std::cout << "Scissors!\n";
            break;
        case ('P'):
            std::cout << "Paper!\n";
            break;
        case ('R'):
            std::cout << "Rock!\n";
            break;
        default:
            std::cout << "an invalid value!\n";
            break;
    }
}

void chooseWinner(char player, char computer){
    switch (player){
        case ('s'):
            switch (computer){
                case ('s'):
                    std::cout << "It's a tie!\n";
                    break;
                case ('p'):
                    std::cout << "You win!\n";
                    break;
                case ('r'):
                    std::cout << "You lose!\n";
                    break;
                default:
                    std::cout << "Error occured!\n";
                    break;
            }
            break;
        case ('p'):
            switch (computer){
                case ('p'):
                    std::cout << "It's a tie!\n";
                    break;
                case ('r'):
                    std::cout << "You win!\n";
                    break;
                case ('s'):
                    std::cout << "You lose!\n";
                    break;
                default:
                    std::cout << "Error occured!\n";
                    break;
            }
            break;
        case ('r'):
            switch (computer){
                case ('r'):
                    std::cout << "It's a tie!\n";
                    break;
                case ('s'):
                    std::cout << "You win!\n";
                    break;
                case ('p'):
                    std::cout << "You lose!\n";
                    break;
                default:
                    std::cout << "Error occured!\n";
                    break;
            }
            break;
        case ('S'):
            switch (computer){
                case ('s'):
                    std::cout << "It's a tie!\n";
                    break;
                case ('p'):
                    std::cout << "You win!\n";
                    break;
                case ('r'):
                    std::cout << "You lose!\n";
                    break;
                default:
                    std::cout << "Error occured!\n";
                    break;
            }
            break;
        case ('P'):
            switch (computer){
                case ('p'):
                    std::cout << "It's a tie!\n";
                    break;
                case ('r'):
                    std::cout << "You win!\n";
                    break;
                case ('s'):
                    std::cout << "You lose!\n";
                    break;
                default:
                    std::cout << "Error occured!\n";
                    break;
            }
            break;
        case ('R'):
            switch (computer){
                case ('r'):
                    std::cout << "It's a tie!\n";
                    break;
                case ('s'):
                    std::cout << "You win!\n";
                    break;
                case ('p'):
                    std::cout << "You lose!\n";
                    break;
                default:
                    std::cout << "Error occured!\n";
                    break;
            }
            break;
    }
}