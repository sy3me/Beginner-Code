//Write a program to get 10 integers from the user and print them. Use a for loop, but if the user enters the number 7, immediately exit the loop and finish the program.
//Separate the numbers with new lines (\\n).
//Hints
//Include the necessary headers and write the main function.
//Use the break statement to exit the loop when needed.

#include <iostream>

int main(){
    int integerArray[10];

    for (int i = 0; i < 10; i++){
        std::cin >> integerArray[i];
        if (integerArray[i] == 7){
            std::cout << integerArray[i] << '\n';
            break;
        } else{ 
            std::cout << integerArray[i] << '\n';
        }
    }

    return 0;
}