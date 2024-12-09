#include <iostream>

void happyBirthday(std::string koka, int age);

int main()
{
    std::string name = "Ozan";
    int age = 29;

    happyBirthday(name, age);
    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}
void happyBirthday(std::string koka, int age)
{
    std::cout << "HAPPY BIRTHDAY TO " << koka << age << '\n';
    std::cout << "HAPPY BIRTHDAY DEAR " << koka << age << '\n';
    std::cout << "HAPPY BIRTHDAY TO " << koka << age << '\n';
    std::cout << "HAPPY BIRTHDAY TO " << koka << age << '\n';
}

