#include <iostream>

void swap(int &x, int &y);

int main(){
    int x = 10;
    int y = 9;

    swap(x, y);

    std::cout << x << '\t' << y << '\n';

    return 0;
}

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
