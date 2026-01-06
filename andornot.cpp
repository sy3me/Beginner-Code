#include <iostream>

int main(){
    bool lnki;
    bool hcms;
    std::cout << "Please enter in '1' if you like Nicki Minaj, or '0' if you do not:" << '\n';
    std::cin >> lnki;
    std::cout << "Please enter in '1' if you have common sense, or '0' if you do not:" << '\n';
    std::cin >> hcms;

    if (lnki && hcms){
        std::cout << "One of those answers is a lie!\n";
    } else if (!lnki && !hcms){
        std::cout << "Don't worry, you have common sense!\n";
    } else{
        std::cout << "No lies detected!\n";
    }

    return 0;
}