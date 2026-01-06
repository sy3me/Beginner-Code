#include <iostream>

int main() {
    // Given array
    int values[6] = {15, 23, 8, 42, 17, 31};
    
    // TODO: Create a pointer named 'ptr' that points to the first element of the array
    int* valuePtr = values;
    // TODO: Use a loop to iterate through all 6 elements using pointer arithmetic
    // TODO: Print each element by dereferencing the pointer
    // TODO: Move the pointer to the next element using pointer arithmetic
     for(int i = 0; i < 6; i++){
        std::cout << "Element: " << *valuePtr << '\n';
        valuePtr++;
     }
    
    return 0;
}