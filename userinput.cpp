#include <iostream>

int main(){
    std::string name;
    double age;
    double tet;
    double tet2;

    std::cout << "Good afternoon, what is your name?" << '\n';
    std::getline(std::cin >> std::ws, name);

    std::cout << name << " is a very cool name." << '\n';
    std::cout << "How many years old are you " << name << "?" << '\n';
    std::cin >> age;
    std::cout << "Wow you are an unc at " << age << " years old." << '\n';

    return 0;

}