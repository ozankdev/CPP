#include <iostream>

// && -> sağlanan iki verininde doğru olması gerekiyor
// || -> sağlanan iki veriden en az birinini doğru olması gerekiyor.
//  ! -> Mantıksal operatörün değerini tersine çevirir!

int main() {

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp <= 0 || temp >= 30){ // sıcaklık 0 dan büyük ve && ve 30 dan düşükse yani 0 ve 30 arasındaysa temp good, değilse bad!
        std::cout << "The temperature is bad!\n";
    } else {
        std::cout << "The temperature is good!\n";
    }

    bool sunny = true;

    if (!sunny) {
        std::cout << "It is Sunny Outside!";
    } else {
        std::cout << "It it Cloudy Outside!";
    }

    return 0;
}