#include <iostream>

int searchCoin(std::string coinList[], int listSize, std::string targetCoin);

int main() {

    std::string coinList[] = { "Bitcoin" , "Ethereum" , "Tether" , "XRP" , "Solana" , "BNB" , "Doge" , "Cardano" , "Avalanche" };
    int listSize = sizeof(coinList)/sizeof(coinList[0]);
    int listIndex;
    std::string targetCoin;

    do{
        std::cout << "Type a Coin Name To Search: \n";
        std::getline(std::cin, targetCoin);
        listIndex = searchCoin(coinList, listSize, targetCoin);
        if(listIndex != -1) {
            std::cout << targetCoin << " Found at the recordings!\n";
        } else {
            std::cout << targetCoin << " Not Found, Try Again!\n";
        }
    }while(listIndex == -1);

    return 0;

}

int searchCoin(std::string coinList[], int listSize, std::string targetCoin){

    for(int i = 0; i < listSize; i++) {
        if(coinList[i] == targetCoin) {
            return i;
        }
    }
    
    return -1;

}