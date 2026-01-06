#include <iostream>

//pointers seem to cause to split the name into two if there is a space yet pName only shows one address ):

int main(){
    std::string name;
    std::string *pName = &name;

    std::cout << "Please enter in your name:\n";
    getline(std::cin, name);
    std::cin.clear();
    fflush(stdin);

    do{
    std::cout << "Hello " << name << ", the address of your name is: " << pName << "\nWould you like to change your name?\nEnter 'q' to exit (I'm sorry if your name is q lol)\n";
    std::cin >> name;

    } while (name != "q");
    return 0;
}