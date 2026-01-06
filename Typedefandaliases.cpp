#include <iostream>
typedef std::string text_t;
using i_t = int;

int main(){
    text_t name = "Liam";
    i_t age = 18;

    std::cout << "My name is " << name << " and I am " << age << " years old.";
}