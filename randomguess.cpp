#include <iostream>

int main() {

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    do {
        std::cout << "Enter a guess between (1-100): \n";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too High, Try Again!";
        } else if (guess < num) {
            std::cout << "Too Low, Try Again!";
        } else {
            std::cout << "CORRECT!, The Number Is: " << num << std::endl;
            std::cout << "Number of tries: " << tries;
        }

    } while(guess != num);

    return 0;
}