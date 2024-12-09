#include <iostream>

int main() {

    // condition ? expression1 : expression2
    // soru sormak gibi condition ?' true'mu? eğer öyleyse ... if/else yerine geçebilen bir operatör!


    int grade = 75;
    int number = 10;

    // if (grade >= 60)
    // {
    //     std::cout << "You Pass!";
    // }
    // else
    // {
    //     std::cout << "You Fail!";
    // }

    grade >= 60 ? std::cout << "You'll Pass!" << std::endl : std::cout << "You Fail!" << std::endl;
    // grade 60 veya 60'dan büyük mü? . evet --->   true : false ----> true ise ":" sol taraf çalışır false ise sağ taraf çalışır!

    number %2 == 1 ? std::cout << "ODD!" << std::endl : std::cout << "EVEN!" << std::endl;

    //boolean nasıl çalışır ?

    bool hungry = false;

    hungry == true ? std::cout << "Get a breakfast!" << std::endl : std::cout << "Wait some time!" << std::endl; // true veya false kontrolünde buna gerek yok. daha kısa yazılabilir.

    bool tired = false;

    tired ? std::cout << "Get some rest!" << std::endl : std::cout << "Keep Pushing!" << std::endl;

    // bir başka yöndemde şu şekilde olabilir!

    bool outOfGas = false;

    std::cout << (outOfGas ? "Find a Gas Station!" : "You're doing fine!");


    return 0;
}