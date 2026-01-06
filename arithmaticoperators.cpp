#include <iostream>

int main(){
    std::string name = "Liam";
    int slices_of_cake = 10;
    int number_of_people = 4;
    int remainder = slices_of_cake % number_of_people;

    std::cout << "After " << number_of_people << " people ate " << slices_of_cake << " slices of cake, there were " << remainder << " slices of cake left for " << name << ".";
}