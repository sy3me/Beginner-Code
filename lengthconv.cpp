#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::string unit;
    double lengthcm;
    int lengthft;
    double lengthin;

    std::cout << "########### Length Converter ###########\n";
    std::cout << "Please enter the unit you want to convert to, eg: 'cm' or 'feet':\n";
    std::cin >> unit;

    if (unit == "cm"){
        std::cout << "Please enter in ONLY the feet (not spare inches) of the length:\n";
        std::cin >> lengthft;
        std::cout << "Please enter in ONLY the 'spare' inches of the length:\n";
        std::cin >> lengthin;
        
        lengthcm = (lengthft*12 + lengthin) * 2.54;
        std::cout << "The length is " << lengthcm << " cm.\n";
    } else if (unit == "feet"){
        std::cout << "Please enter in the length in cm:\n";
        std::cin >> lengthcm;
        
        lengthft = (lengthcm/2.54)/12;
        lengthin = ((lengthcm / 2.54) - lengthft*12);
        lengthin = std::round(lengthin);
        std::cout << "The length is " << lengthft << " feet and " << lengthin << " inches.\n";
    } else{
        std::cout << "ERROR: Please only enter in the unit 'cm' or 'feet'!\n";
    }

    std::cout << "#########################################\n";
    return 0;
}