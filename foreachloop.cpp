#include <iostream>

double totalPrices(double prices[], int sizePrices);

int main(){
    double prices[] = {67, 89, 69, 420, 41, 5};
    int sizePrices = sizeof(prices) / sizeof(double);

    double total = totalPrices(prices, sizePrices);

    std::cout << "The total of the prices = $" << total << '\n';

    return 0;
}

double totalPrices(double prices[], int sizePrices){
    double total;
    for (int i = 0; i < sizePrices; i++){
        total += prices[i];
    }
    return total;
}