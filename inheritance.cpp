#include <iostream>

class Pizza {
    public:
        std::string base = "Tomato paste and Cheese";
    void cookPizza(){
        std::cout << "This pizza is cooking ... done!\n";
    }
    void eatPizza(){
        std::cout << "This pizza is so yummy!\n";
    }
};

class chickenPizza : public Pizza {
    public:
        std::string toppings = "Chicken";
};

int main(){
    Pizza cheesePizza;
    chickenPizza chickenPizza;

    std::cout << "####### Syeme's Pizzeria #######" << '\n';
    std::cout << "The cheese pizza has base: " << cheesePizza.base << '\n';
    cheesePizza.cookPizza();
    cheesePizza.eatPizza();
    std::cout << "The chicken pizza has base: " << chickenPizza.base << '\n';
    std::cout << "The cheese pizza has topping(s): " << chickenPizza.toppings << '\n';
    chickenPizza.cookPizza();
    chickenPizza.eatPizza();

    return 0;
}