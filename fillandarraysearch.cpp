#include <iostream>
using namespace std;

int searchCar(string cars[], int carSize, string targetCar);

int main() {

    string cars[9];
    fill(cars, cars + 1, "Mercedes");
    fill(cars + 1, cars + 4, "BMW");
    fill(cars + 4, cars + 7, "Volkswagen");
    fill(cars + 7, cars + 9, "Ford");

    int carsSize = sizeof(cars)/sizeof(cars[0]);
    int carIndex;
    string targetCar;

    cout << "Please enter a car brand to search: \n";
    getline(cin, targetCar);

    carIndex = searchCar(cars, carsSize, targetCar);

    if(carIndex != -1) {
        cout << targetCar << " Found at index " << carIndex << '\n';
    } else {
        cout << targetCar << " couln't be found at anywhere!\n";
    }


    return 0;
}

int searchCar(string cars[], int carSize, string targetCar) {

    for(int i = 0; i < carSize; i++) {
        if(cars[i] == targetCar) {
            return i;
        }
    }

    return -1;

}