#include <iostream>
#include <cmath>

int main() {

    double x = 3;
    double y = 4;
    double z;
    double w;

    // max ve min function.

    // z = std::max(x,y); // iki sayı arasındaki en büyük değeri verir.
    // w = std::min(x,y); // iki sayı arasındaki en küçük değeri verir.

    //pow ve sqrt function. --> Karekök ve üslü sayılar.

    z = pow(x,y); // x üssü y ?
    w = sqrt(x); // x'in karekökü nedir ?

    std::cout << z << std::endl;
    std::cout << w << std::endl;

    // abs , absolute value , reel sayılar.

    std::cout << abs(-5) << std::endl;

    // round (yuvarlamafonksiyonu)

    double p = 3.14;
    double p2 = 3.99;

    std::cout << round(p) << std::endl;  // round en .'dan sonraki en kısa mesafeye yuvarlar. 3.14 = 3, 3.75 = 4;
    std::cout << ceil(p) << std::endl; // ceil ne olursa olsun sayıyı yukarıya yuvarlar. 3.87 = 4, 3.12 = 4;

    std::cout << floor(p2) << std::endl;  // floor ne olursa olsun sayıyı aşağıya yuvarlar.


    return 0;
}