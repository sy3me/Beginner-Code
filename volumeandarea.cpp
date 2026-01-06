#include <iostream>

double calc(double width, double height, double depth){
    if (depth > 0){
        return width*height*depth;
    } else{
        return width*height;
    }
}

int main(){
    std::string uom;
    double width;
    double height;
    double depth;

    std::cout << "Welcome to the Rectanglular Volume and Area Calculator!\nPlease enter in your unit of measurement eg: 'cm':\n";
    std::cin >> uom;
    std::cout << "Please enter in your width, height, and depth(enter '0' if 2D), each entry separated by enter:\n";
    std::cin >> width >> height >> depth;
    if (width < 0 || height < 0 || depth < 0){
        std::cout << "Please only enter in values >= 0 :(\n)";
    } else{
        if (depth > 0){
            std::cout << "The volume of the rectanglular prism is " << calc(width, height, depth) << uom << "^3\n";
        } else if (depth == 0){
            std::cout << "The area of the rectangle is " << calc(width, height, depth) << uom << "^2\n";
    }
    }
    
    return 0;
}