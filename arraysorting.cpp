#include <iostream>

void ascendingsortArray(int arr[], int size);
void descendingsortArray(int arr[], int size);

int main(){
    int crazyArray[] = {67, 420, 41, 69, 89, 5, 7, 6, 11};
    int sizecrazyArray = sizeof(crazyArray)/sizeof(int);
    std::string ascORdes;

    std::cout << "Would you like to sort in 'ascending' or 'descending' order?\n";
    std::cin >> ascORdes;

    std::cout << "The unsorted array is: {";
    for(int i = 0; i < sizecrazyArray-1; i++){
        std::cout << crazyArray[i] << ", ";
    }
    std::cout << crazyArray[sizecrazyArray-1] << "}\n";

    if (ascORdes == "ascending"){
        ascendingsortArray(crazyArray, sizecrazyArray);
    } else if (ascORdes == "Ascending"){
        ascendingsortArray(crazyArray, sizecrazyArray);
    }else if (ascORdes == "descending"){
        descendingsortArray(crazyArray, sizecrazyArray);
    } else if (ascORdes == "Descending"){
        descendingsortArray(crazyArray, sizecrazyArray);
    } else{
        std::cout << "Error! Please only enter in one of the two options!\n";
    }

    return 0;
}

void ascendingsortArray(int arr[], int size){
    int tempElement;
    for(int i = 0; i < size-1; i++){
        for (int j = 0; j < size-1; j++){
            if (arr[j] > arr[j+1]){
                tempElement = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tempElement;
            }
        }
    }

    std::cout << "The sorted array is: {";
    for(int i = 0; i < size-1; i++){
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[size-1] << "}\n";
}

void descendingsortArray(int arr[], int size){
    int tempElement;
    for(int i = 0; i < size-1; i++){
        for (int j = 0; j < size-1; j++){
            if (arr[j] < arr[j+1]){
                tempElement = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tempElement;
            }
        }
    }

    std::cout << "The sorted array is: {";
    for(int i = 0; i < size-1; i++){
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[size-1] << "}\n";
}