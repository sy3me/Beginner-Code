#include <iostream>
#include <string>

class phone {
    public:
        int number;
        std::string model;
        double battery = 67.41;

        void call(int callNumber){
            std::cout << "This phone is calling " << callNumber << '\n';
        }
        void turnOn(){
            std::cout << "The phone is now on!\n";
        }
        void turnOff(){
            std::cout << "The phone is now off!\n";
        }
};

int main(){
    phone phone1;
    int number;
    std::string model;
    char action;
    int callNumber;

    std::cout << "####### Phone Interface #######\nPlease enter in the number of your phone:\n";
    std::cin >> std::ws >> number;
    phone1.number = number;
    std::cout << "Please enter in the model of your phone:\n";
    std::getline(std::cin >> std::ws, model);
    phone1.model = model;
    std::cout << "Enter in 'S' to turn the phone on or 'Q' to quit:\n";
    std::cin >> action;
    action = toupper(action);

    if (action == 'S'){
        phone1.turnOn();
        do{
            std::cout << "Please enter '1' to call a number, enter '2' to check battery, or enter '3' to turn off the phone\n";
            std::cin >> std::ws >> action;
            switch (action){
                case '1':
                    std::cout << "Please enter in the number you would like to call:\n";
                    std::cin >> std::ws >> callNumber;
                    phone1.call(callNumber);
                    break;
                case '2':
                    std::cout << "The battery is at " << phone1.battery << "%      :3\n";
                    break;
                case '3':
                    phone1.turnOff();
                    break;
            }

        } while (action != '3');
    } else{
        std::cout << "Quitting!\n";
    }

    return 0;
}