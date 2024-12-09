#include <iostream>

int main() {


    for(int i = 1; i <= 20; i++) {
        if(i == 13) {
            continue; // i 13 olunca kes ve 13'ü almadan 14'den devam et!
        }
        std::cout << i << '\n';
    }

    for(int a = 5; a <= 100; a++){
        if(a == 25) {
            break;  // a 25'e ulaşınca kes ve devam etme, ayrıca 25'i dahil etme!
        }
        std::cout << a << '\n';
    }




    return 0;
}