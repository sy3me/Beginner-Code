#include <iostream>

int main(){
    double x = (int)3.14159265;
    int slices_of_cake_eaten = 8;
    int slices_of_cake = 10;
    double perc_of_cake_eaten = slices_of_cake_eaten/(double)slices_of_cake*100;

    std::cout << "I dont like pi so I shorten it to " << x << ". Instead, I like cake, so I ate " << perc_of_cake_eaten << "% of my cake.";

    return 0;

}