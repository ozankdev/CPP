#include <iostream>

int main() {

    // Aylara göre önce if else if structure kuralım.

    // int month;

    // std::cout << "Please Provide a Month! (1-12)" << std::endl;
    // std::cin >> month;

    // if (month == 1) {
    //     std::cout << "Ocak";
    // } else if (month == 2) {
    //     std::cout << "Şubat";
    // } else if (month == 3) {
    //     std::cout << "Mart";
    // } else if (month == 4) {
    //     std::cout << "Nisan";
    // } else if (month == 5) {
    //     std::cout << "Mayıs";
    // } else if (month == 6) {
    //     std::cout << "Haziran";
    // } else if (month == 7) {
    //     std::cout << "Temmuz";
    // } else if (month == 8) {
    //     std::cout << "Ağustos";
    // } else if (month == 9) {
    //     std::cout << "Eylül";
    // } else if (month == 10) {
    //     std::cout << "Ekim";
    // } else if (month == 11) {
    //     std::cout << "Kasım";
    // } else if (month == 12) {
    //     std::cout << "Aralık";
    // } else if (month > 12) {
    //     std::cout << "Lütfen (1-12) arasında bir değer giriniz!";
    // } else if (month < 1) {
    //     std::cout << "Lütfen (1-12) arasında bir değer giriniz!";
    // }

    // şimdi bu gibi durumlarda yapılması gereken kodlama şu şekilde! Switch & Case

    // int month;

    // std::cout << "Please Provide a Month (1-12): " << std::endl;
    // std::cin >> month;

    // switch(month){
    //     case 1:
    //         std::cout << "It's January!";
    //         break;
    //     case 2:
    //         std::cout << "It's February!";
    //         break;
    //     case 3:
    //         std::cout << "It's March!";
    //         break;
    //     case 4:
    //         std::cout << "It's April";
    //         break;
    //     case 5:
    //         std::cout << "It's May!";
    //         break;
    //     case 6:
    //         std::cout << "It's June!";
    //         break;
    //     case 7:
    //         std::cout << "It's July!";
    //         break;
    //     case 8:
    //         std::cout << "It's August!";
    //         break;
    //     case 9:
    //         std::cout << "It's September!";
    //         break;
    //     case 10:
    //         std::cout << "It's October!";
    //         break;
    //     case 11:
    //         std::cout << "It's November!";
    //         break;
    //     case 12:
    //         std::cout << "It's December!";
    //         break;

    //     default:
    //         std::cout << "Please enter in only numbers (1-12)";
    // }

    char grade;

    std::cout << "What Letter Grade?: ";
    std::cin >> grade;

    switch(grade) {

        case 'A':
            std::cout << "You did great job!";
            break;
        case 'B':
            std::cout << "Cool, Keep Going!";
            break;
        case 'C':
            std::cout << "You gotta do more exercises!";
            break;
        case 'D':
            std::cout << "Please read more you are unworthy!";
            break;
        case 'E':
            std::cout << "You are about to reach end of the line!";
            break;
        case 'F':
            std::cout << "Do not waste your time here!";
            break;

        default:
            std::cout << "Please provide a grade letter between A-F";
    }
    

    return 0;
}