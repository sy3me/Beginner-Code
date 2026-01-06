#include <iostream>

int main() {
    // Read input
    int value;
    std::cin >> value;
    
    // TODO: Write your code below
    // Use 'new' to dynamically allocate memory for an integer
    // Store the pointer in a variable named 'numPtr'
    // Assign the input value to the dynamically allocated memory
    int* numPtr = new int;
    *numPtr = value;
    
    // Output the result
    std::cout << "Value: " << *numPtr << '\n';
    std::cout << "Address: " << &numPtr << '\n';
    
    return 0;
}