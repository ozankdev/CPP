#include <iostream>

int main() {

    // pseudo-random == NOT Truly random ( but close!);

    srand(time(NULL));

    int num = (rand() % 6) + 1;

    std::cout << num;

    return 0;
}