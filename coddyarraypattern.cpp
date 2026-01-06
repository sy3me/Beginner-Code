//Create a program that receives two integers that indicate the following size of two arrays of integers as input and determines if the second array appears as a pattern within the first array (in consecutive order).
//A pattern exists when all elements of the second array appear together, in the same order, somewhere within the first array, like finding a substring within a string.

#include <iostream>

int main() {
    int n1;
    int n2;

    std::cin >> n1;
    std::cin >> n2;
    std::cin.ignore();
    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++) {
        int val;
        std::cin >> val;
        arr1[i] = val;
    }

    for (int i = 0; i < n2; i++) {
        int val;
        std::cin >> val;
        arr2[i] = val;
    }
    
    // Write your code below using arr1, arr2, n1, n2
    int found;
    for (int i = 0; i < n1; i++){
        if (arr1[i] == arr2[0]){
            for (int j = 0; j < n2; j++){
                if (!(arr1[i+j] == arr2[j])){
                    found = 0;
                    break;
                } else{
                    found+=1;
                }
            }
        }
    }

    if (found == n2){
        std::cout << "true\n";
    } else{
        std::cout << "false\n";
    }

    return 0;
}