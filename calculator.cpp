#include <iostream>
#include <cmath>

int main(){
    char opr;
    double x;
    double y;
    double result;
    std::cout << "-------- Calc (short for calculator btw) --------" << '\n';

    std::cout << "What is your first (x) value ?" << '\n';
    std::cin >> x;
    std::cout << "What is your operation, eg: +, -, *, /?" << '\n';
    std::cin >> opr;
    std::cout << "What is your second (y) value?" << '\n';
    std::cin >> y;

if ((y == 0) && (opr == '/')){
    std::cout << "Error, cannot divide by 0!" << '\n';
    } else{
    switch(opr){
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            result = x / y;
            break;
        default:
            std::cout << "Please enter a correct operator!";
    }
    std::cout << x << " " << opr << " " << y << " " << "= " << result << '\n';
   
    std::cout << "-------------------------------------------------" << '\n';

    return 0;
}
}