#include <iostream>

int main() {

    std::string name;
    int age;

    std::cout << "What's Your Age?" << std::endl;
    std::cin >> age;

    std::cout << "What's Your Full Name?" << std::endl;
    // std::cin >> name; // String ifade bekleniyorsa ve boşluk olacaksa std::getline(); fonksiyonu ile alınır!
    std::getline(std::cin >> std::ws, name);


    std::cout << "Hello " << name << std::endl;
    std::cout << "You're " << age << " Years Old!" << std::endl;

    return 0;
}