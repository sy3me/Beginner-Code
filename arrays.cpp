#include <iostream>

int main(){
    int nElements;
    std::string dType;
    
    std::cout << "How many elements would you like to store in your array?\n";
    std::cin >> nElements;
    std::cout << "Would you like your array to be for 'int', 'double', 'bool', 'string', or 'char'?\n";
    std::cin >> dType;

    int intArray[nElements];
    double dublArray[nElements];
    bool boolArray[nElements];
    std::string strgArray[nElements];
    char charArray[nElements];

    if (dType == "int"){
        for(int i = 0; i < nElements; i++){
        std::cout << "Please enter in a value for an element:\n";
        std::cin >> intArray[i];
        }
        std::cout << "Your array is ";
        for(int i = 0; i < nElements; i++){
            std::cout << intArray[i] << " ";
        }
        std::cout << '\n';
    } else if (dType == "double"){
        for(int i = 0; i < nElements; i++){
        std::cout << "Please enter in a value for an element:\n";
        std::cin >> dublArray[i];
        }
        std::cout << "Your array is ";
        for(int i = 0; i < nElements; i++){
            std::cout << dublArray[i] << " ";
        }
        std::cout << '\n';
    } else if (dType == "bool"){
        for(int i = 0; i < nElements; i++){
        std::cout << "Please enter in a value for an element:\n";
        std::cin >> boolArray[i];
        }
        std::cout << "Your array is ";
        for(int i = 0; i < nElements; i++){
            std::cout << boolArray[i] << " ";
        }
        std::cout << '\n';
    } else if (dType == "string"){
        for(int i = 0; i < nElements; i++){
        std::cout << "Please enter in a value for an element:\n";
        std::cin >> strgArray[i];
        }
        std::cout << "Your array is ";
        for(int i = 0; i < nElements; i++){
            std::cout << strgArray[i] << " ";
        }
        std::cout << '\n';
    } else if (dType == "char"){
        for(int i = 0; i < nElements; i++){
        std::cout << "Please enter in a value for an element:\n";
        std::cin >> charArray[i];
        }
        std::cout << "Your array is ";
        for(int i = 0; i < nElements; i++){
            std::cout << charArray[i] << " ";
        }
        std::cout << '\n';
    } else {
        std::cout << "You did not enter in one of those data types, or did not enter in a valid number of elements!\n";
    }

    return 0;
}