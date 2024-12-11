#include <iostream>

int main() {

    std::string students[] = { "Spongebob" , "Patrick" , "Squidward" , "Sandy" };

    int grades[] = {65, 72, 81, 93};

    // for(int i = 0; i < sizeof(students)/sizeof(std::string); i++)
    // {
    //     std::cout << students[i] << '\n';
    // }

    for (std::string student : students) // for each student in the studens array!
    {
        std::cout << student << '\n';
    }

    for (int grade : grades) // for each grade in the grades array!
    {
        std::cout << grade << '\n';
    }

    return 0;
}