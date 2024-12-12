#include <iostream>

int main() {

    std::string cars[100];

    fill(cars, cars + 25, "Audi");  // 0'dan başla 25'e kadar Audi ile doldur.
    fill(cars + 25, cars + 50, "BMW"); // İlk 25 Audi ile dolu o yüzden 25'den başla 50'ye kadar BMW ile doldur.
    fill(cars + 50, cars + 75, "Porsche"); // ilk 50 Audi ve BMW ile dolu o yüzden 50'den başla 75'e kadar Porsche ile doldur.
    fill(cars + 75, cars + 100, "Volkswagen"); // ilk 75 Audi , BMW ve Porsche ile dolu bu yüzden 75'den başla ve 100'e kadar Volksvagen ile doldur.

    // for(std::string car : cars){
    //     std::cout << car << '\n';
    // }

    std::string planes[113];

    fill(planes, planes + 12, "Boeing");
    fill(planes + 12, planes + 48, "Airbus");
    fill(planes + 48, planes + 79, "Bombardier");
    fill(planes + 79, planes + 113, "Lockheed - Martin");

    for(std::string plane : planes){
        std::cout << plane << '\n';
    }

    return 0;
}