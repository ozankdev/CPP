#include <iostream>

int main() {

    //length  // Girilen string ifadenin kaç index / karakterden olduğunu öğreniriz. length();
    //empty  //  Girilen string ifade boş mu değilmi kontrol yapmaya yarar. empty();
    //clear // bir değeri temizlemek için kullanılır!

    std::string name;

    std::cout << "Enter Your Name!";
    std::getline(std::cin, name);

    name.clear();  // Temizleme metodu!

    std::cout << "Hello" << name;

    // if (name.length() > 12) {
    //     std::cout << "Your name can't be over 12 characters!";
    // } else {
    //     std::cout << "Welcome " << name;
    // }


    // if (name.empty()) {
    //     std::cout << "You didn't enter a name?";
    // } else {
    //     std::cout << "Welcome " << name;
    // }

   

    return 0;
}