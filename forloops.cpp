#include <iostream>

int main() {

    for(int i = 10; i >= 0; i--) {
        std::cout << i << "\n";
    }

    std::cout << "HAPPY NEW YEAR!";

    // i'yi 10'dan başlayarak geriye sardır, 0'a ulaşınca for döngüsünden çık ve cout yazdır!

    for(int i = 1; i <= 15; i++) {
        std::cout << "HAPPY NEW YEAR 15X TIMES!\n";
    }

    // i'yi 1den başlayarak 15'e kadar artır. her seferinde içerdeki HAPPY NEW YEAR yazısını yazdır. 15x Happy New Year!

    return 0;
}