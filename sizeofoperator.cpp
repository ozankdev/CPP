#include <iostream>

int main() {

    double gpa = 2.5;
    std::string name = "OzanKARA";
    char grade = 'F';
    bool student = true;
    char grades[] = { 'A' , 'B' , 'C' , 'D' , 'F' , 'E'};
    std::string students[] = {"Spongebob" , "Patrick" , "Squidward" , "Sandy"};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(students) / sizeof(std::string) << " elements\n";

    return 0;
}