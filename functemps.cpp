#include <iostream>

template <typename T, typename U>
T findMax(T x, U y){
    return (x > y) ? x : y;
}

int main(){
    std::cout << findMax(2.22, 4) << '\n';

    return 0;
}