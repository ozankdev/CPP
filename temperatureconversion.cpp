#include <iostream>

int main() {

    double temp;
    char unit;

    std::cout << "******************* TEMPERATURE CONVERSION (F -> C) *******************\n";

    std::cout << "F - Fahrenheit\n";
    std::cout << "C - Celcius\n";
    std::cout << "What unit do you prefer to convert?: ";

    std::cin >> unit;

    if(unit == 'F' || unit == 'f') {
        std::cout << "Please enter the temp as Fahrenheit: " << std::endl;
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temp is: " << temp;
    } else if (unit == 'C' || unit == 'c') {
        std::cout << "Please enter the temp as Celcius: " << std::endl;
        std::cin >> temp;

        temp = (temp * 1.8) + 32;
        std::cout << "Temp is: " << temp;
    }

    return 0;
}