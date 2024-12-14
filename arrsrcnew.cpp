#include <iostream>

int searchNumber(int numbers[], int numberSize, int targetNumber);

int main(){

    int numbers[] = {5, 14, 17, 27, 36, 4, 13, 72, 54};
    int numberSize = sizeof(numbers)/sizeof(numbers[0]);
    int numberIndex;
    int targetNumber;

    std::cout << "Please Enter a Number to Search: \n";
    std::cin >> targetNumber;

    numberIndex = searchNumber(numbers, numberSize, targetNumber);

    if(numberIndex != -1) {
        std::cout << targetNumber << " is found at index " << numberIndex << '\n';
    } else{
        std::cout << targetNumber << " couldn't be found at anywhere!" << '\n';
    }

    return 0;
}

int searchNumber(int numbers[], int numberSize, int targetNumber) {

    for(int i = 0; i < numberSize; i++) {
        if(numbers[i] == targetNumber) {
            return i;
        }
    }

    return -1;

}