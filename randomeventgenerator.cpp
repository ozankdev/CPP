#include <iostream>

int main() {

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum) {
        case 1: std::cout << "You win a bumper sticker!\n";
            break;
        case 2: std::cout << "You win a t-shirt!\n";
            break;
        case 3: std::cout << "You win a free lunch\n";
            break;
        case 4: std::cout << "You win a gift card\n";
            break;
        case 5: std::cout << "You win concert ticket\n";
            break;
        case 6: std::cout << "You win a car holy!!!\n";
            break;
        
        default: std::cout << "Please Roll The Dice Again!";
    }

    return 0;
}