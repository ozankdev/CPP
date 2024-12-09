#include <iostream>

double square(double length);
double cube(double length);
std::string concatNames(std::string str1, std::string str2);

int main() {

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::string firstName;
    std::string lastName;
    
    std::cout << "Please Enter Your First Name: \n";
    std::cin >> firstName;

    std::cout << "Please Enter Your Last Name: \n";
    std::cin >> lastName;

    std::string fullName = concatNames(firstName, lastName);
    std::cout << "Hello " << fullName;

    return 0;
}

std::string concatNames(std::string str1, std::string str2) {
    return str1 + " " + str2;
}

double square(double length) {
    double result = length * length;
    return result;
}

double cube(double length) {
    double result = length * length * length;
    return result;
}

