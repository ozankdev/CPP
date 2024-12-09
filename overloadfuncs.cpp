#include <iostream>

// OVERLOADING FUNCTION!
// FONKSIYONLAR AYNI İSMİ PAYLAŞABİLİR FAKAT İÇERİĞİ FARKLA PARAMETRELER İLE DOLDURMAK ŞARTIYLA!!!!!

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);


int main() {

    bakePizza("pepperroni ","chili ");

    return 0;
}

void bakePizza() {
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << "pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your " << topping1 << topping2 << "pizza!\n";
}