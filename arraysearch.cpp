#include <iostream>
using namespace std;

int searchNote(int sonuclar[], int sonucIndex, int hedefSonuc);

int main() {

    int results[] = { 15, 25, 42, 56, 39, 72, 89, 100 };
    int arraySize = sizeof(results)/sizeof(results[0]);
    int resultIndex;
    int targetNote;

    cout << "Please enter a result note iot search: \n";
    cin >> targetNote;

    resultIndex = searchNote(results, arraySize, targetNote);

    if(resultIndex != -1) {
        cout << targetNote << " found at the index " << resultIndex << '\n';
    }
    else {
        cout << targetNote << " didn't found in the records!\n";
    }

    return 0;
}

int searchNote(int sonuclar[], int sonucSize, int hedefSonuc) {
    for(int i = 0; i < sonucSize; i++){
        if(sonuclar[i] == hedefSonuc) {
            return i;
        }
    }

    return -1;
}






// #include <iostream>

// int searchCar(std::string cars[], int carSize, std::string myCar);

// int main() {

//     std::string cars[] = { "BMW" , "Audi", "Mercedes-Benz", "Porsche" };
//     int carSize = sizeof(cars)/sizeof(cars[0]);
//     int carIndex;
//     std::string myCar;

//     std::cout << "Please enter your cars brand: \n";
//     std::getline(std::cin, myCar);

//     carIndex = searchCar(cars, carSize, myCar);

//     if(carIndex != -1) {
//         std::cout << myCar << " is at index " << carIndex << '\n';
//     }
//     else {
//         std::cout << myCar << " can't be found at any\n";
//     }

//     return 0;
// }

// int searchCar(std::string cars[], int carSize, std::string myCar) {

//     for(int c = 0; c < carSize; c++) {
//         if(cars[c] == myCar) {
//             return c;
//         }
//     }

//     return -1;

// }