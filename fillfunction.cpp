#include <iostream>
#include <algorithm> // fill fonksiyonu için

int main() {
    const int SIZE = 100;
    std::string foods[SIZE];

    // İlk 25 eleman "Pizza", sonraki 25 eleman "Hamburgers", sonra 25 "Hotdogs" ve son 25 "Pasta"
    std::fill(foods, foods + (SIZE/4), "Pizza");
    std::fill(foods + (SIZE/4), foods + (SIZE/4) * 2, "Hamburgers");
    std::fill(foods + (SIZE/4) * 2, foods + (SIZE/4) * 3, "Hotdogs");
    std::fill(foods + (SIZE/4) * 3, foods + SIZE, "Pasta");

    for (const std::string& food : foods) {
        std::cout << food << '\n';
    }

    return 0;
}
