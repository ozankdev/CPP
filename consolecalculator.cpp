#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***************** CALCULATOR *****************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: " << std::endl;
    std::cin >> num1;
    
    std::cout << "Enter #2: " << std::endl;
    std::cin >> num2;

    switch(op) {

        case '+':
            result = num1 + num2;
            std::cout << "Result is: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result is: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result is: " << result << std::endl;
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result is: " << result << std::endl;
            break;

        default:
            std::cout << "Please provide one of the following math operators (+ - * /) then enter your numbers to calculate!" << std::endl;

    }











    std::cout << "**********************************************";

    return 0;
}