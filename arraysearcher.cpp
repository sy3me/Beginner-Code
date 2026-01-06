#include <iostream> 

int searchArray(std::string arr[], std::string goal, int size);

int main(){
    std::string funnyArray[] = {"67", "420", "69", "penny-nickel-dime", "skibidi"};
    std::string goal;
    int position;
    int size = sizeof(funnyArray) / sizeof(std::string);

    std::cout << "Please enter in the string you are wising to locate within the 'Funny Array':\n";
    std::cin >> goal;

    position = searchArray(funnyArray, goal, size);

    if (position == !(-1)){
        std::cout << "The string '" << goal << "' was found at " << position << " within the array.\n";
    } else{
        std::cout << "The string '" << goal << "' was not found in the array, sorry :(\n";
    }

    return 0;
}

int searchArray(std::string arr[], std::string goal, int size){
    for (int i = 0; i < size; i++){
        if (arr[i] == goal){
            return i;
        } 
    }
    return -1;
}