// Namespaces = provides a solution for preventing name conflicts in large projects.
// Each entity needs a unique name. A namespace allows for identically named entities.
// as long as the namespaces are different.

#include <iostream>

namespace firstNamespace {
    int x = 1;
}

namespace secondNamespace {

    std::string ozan = "ozan!";
    int x = 2;
}

int main() {
    using namespace secondNamespace;
    using std::string;
    using std::cout;  // namespace std kullanılırsa, belirli metodların başına std:: konmaya gerek kalmaz!
                          // Fakat bu şekilde kullanılırsa yüzlerce çakışma olabilir. Bu yüzden mesela her seferind std::cout 
                          // kullanmak istemiyorsak using std::cout ekleyerek sadece cout metodlar için std:: ön ekini kaldırabiliriz.
                          
    cout << x << ozan;

    return 0;
}


