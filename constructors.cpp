#include <iostream>

class foundation{
    public:
        int shade;
        std::string finish;
        double price;
    foundation(int shade, std::string finish, double price){
        this->shade = shade;
        this->finish = finish;
        this-> price = price;
    }
    foundation(int shade, double price){
        this->shade = shade;
        this-> price = price;
    }
};

int main(){
    foundation foundation1 (4, 67.99);
    foundation foundation2 (1, "Dewy", 99.99);

    std::cout << "Shade: " << foundation1.shade << '\n';
    std::cout << "Price: " << foundation1.price << "\n\n";

    std::cout << "Shade: " << foundation2.shade << '\n';
    std::cout << "Finish: " << foundation2.finish << '\n';
    std::cout << "Price: " << foundation2.price << '\n';

    return 0;
}