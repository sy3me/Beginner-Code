#include <iostream>
#include <string>

void action_deposit();
void action_withdraw();
void action_show_balance();

double balance;

int main(){
    bool exit = false;
    char choice_of_action;
    do{
        std::cout << "Welcome to The Bank of Syeme:\nEnter 'B' to show balance, enter 'D' to deposit, enter 'W' to withdraw, or enter 'E' to exit:\t\t:3\n";
        std::cin >> choice_of_action;
        std::cin.clear();
        fflush(stdin);

        switch (choice_of_action){
            case ('B'):
                action_show_balance();
                break;
            case ('D'):
                action_deposit();
                break;
            case ('W'):
                action_withdraw();
                break;
            case ('E'):
                exit = true;
                break;
            default:
                std::cout << "Please enter in a valid response!\n";
                break;
            }
        } while (exit == false);
    
    std::cout << "Thank you for trusting The Bank of Syeme :3\n";

    return 0;
    }
    

void action_show_balance(){
    std::cout << "Your current balance is $" << balance << '\n';
}
void action_deposit(){
    std::string sAmount;
    double amount;
    std::cout << "Enter in the amount of money (2 decimal places) that you would like to deposit:\n";
    std::cin >> sAmount;
    if ((sAmount.length() - 1) == sAmount.find('.') + 2){
        amount = stod(sAmount);
        if (amount > 0){
            balance+=amount;
            std::cout << "Thanks for depositing, your money, your current balance is $" << balance << '\n';
        }else {
            std::cout << "Error, you can only deposit money greater than 0 dollars!\n";
        }
    } else{
        std::cout << "Please enter an amount with correct decimal places!\n";
        }
    
}
void action_withdraw(){
    std::string sAmount;
    double amount;
    std::cout << "Enter in the amount of money (2 decimal places) that you would like to withdraw:\n";
    std::cin >> sAmount;
    if ((sAmount.length() - 1) == sAmount.find('.') + 2){
        amount = stod(sAmount);
       if (amount > 0 && balance >= amount){
            balance-=amount;
            std::cout << "Thanks for withdrawing :( your money, your current balance is $" << balance << '\n';
        }else if (amount > balance){
            std::cout << "You cannot withdraw that much money!\n";
        }else if (amount <=0){
            std::cout << "Error, you can only withdraw money greater than 0 dollars!\n";
        } else{
             std::cout << "Please only enter in an amount with a correct value, eg: '120.67'\n";
        }
    } else{
        std::cout << "Please enter an amount with correct decimal places!\n";
    }
}
