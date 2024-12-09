#include <iostream>

// (+ - 0 /) Basic matematik işlemleri gibi düşünülebilir!

int main() {

    int students = 20;

    // students = students + 1; // bir yolu bu!

    // students+=5; // bir başka yolu bu!

    // students++; // bir başka yolu bu <- bu sadece +1 ekler!

    // Aynı durumlar - operatörleri içinde geçerlidir!

    // students = students * 2;

    students = students / 3;

    int remainder = students % 2;

    std::cout << students;
    std::cout << remainder;

    return 0;
}