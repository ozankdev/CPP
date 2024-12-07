/* typedef = başka bir veri türü için ek bir ad (alias) oluşturmak için kullanılan
ayrılmış anahtar sözcük. Mevcut bir tür için yeni tanımlayıcı Okunabilirliğe
yardımcı olur ve yazım hatalarını azaltır!
*/

#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;  // artık bu uzun veri yapısı , pairlist_t adıyla çağırılabilir. typedef ( type definition )!
// typedef std::string text_t; // std::string artık "text_t" olarak çağırılabilir.
// typedef int number_t; // int data türü artık "number_t" olarak çağırılabilir.

using text_t = std::string;  // data tipi bu şekilde de değiştirilebilir.!
using number_t = int;   // data tipi bu şekilde de değiştirilebilir.!

int main() {

    text_t firstName = "Ozan";

    std::cout << firstName << std::endl;

    number_t x = 5;

    std::cout << x;
    

    return 0;
}