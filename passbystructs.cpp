#include <iostream>

struct circle{
    std::string colour;
    double radius;
};

void paintCircle(circle &circle, std::string colour);
void resizeCircle(circle &circle, double radius);

int main(){
    circle circle1;
    circle1.colour = "Pink";
    circle1.radius = 6.7;

    char changeColour;
    char changeRadius;

    std::cout << "##### Circle stuff #####\nYour circle is the colour: " << circle1.colour << " and has a radius of " << circle1.radius << " cm.\n";
    std::cout << "Would you like to change the colour of your circle 'Y' or 'N'?\n";
    std::cin >> changeColour;
    changeColour = toupper(changeColour);
    if (changeColour == 'Y'){
        std::string newColour;
        std::cout << "What colour would you like?\n";
        std::cin >> std::ws >> newColour;
        paintCircle(circle1, newColour);
    }

    std::cout << "Would you like to change the radius of your circle 'Y' or 'N'?\n";
    std::cin >> changeRadius;
    changeRadius = toupper(changeRadius);
    if (changeRadius == 'Y'){
        double newRadius;
        std::cout << "What colour would you like?\n";
        std::cin >> std::ws >> newRadius;
        resizeCircle(circle1, newRadius);
    }

    std::cout << "Your circle is the colour: " << circle1.colour << " and has a radius of " << circle1.radius << " cm.\n";    

    return 0;
}

void paintCircle(circle &circle, std::string colour){
    circle.colour = colour;
    std::cout << "The new colour is: " << circle.colour << '\n';
}

void resizeCircle(circle &circle, double radius){
    circle.radius = radius;
    std::cout << "The new radius is: " << circle.radius << '\n';
}