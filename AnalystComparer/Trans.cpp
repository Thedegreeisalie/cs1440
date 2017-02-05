#include "Trans.h"

Trans::Trans(std::string sym, int howMany, int buyD, int buyP, int buyF, int saleD, int saleP, int saleF):
    symbol(sym),
    quantity(howMany),
    buyDate(buyD),
    buyPrice(buyP),
    buyFee(buyF),
    saleDate(saleD),
    salePrice(saleP),
    saleFee(saleF)
    {}

Trans::Trans(std::string HugeAssString)
{
    std::string sym;
    std::vector<std::string> initList;
    int k = 0;
    while(k < 8)
    {
        initList.push_back(HugeAssString.substr(0, HugeAssString.find(',')));
        // std::cout << initList[k] << std::endl;
        HugeAssString.erase(0, HugeAssString.find(',')+1);
        k++;
    }
    // std::cout << stoi(initList[1]) << std::endl;
    // std::cout << stoi(initList[2]) << std::endl;
    // std::cout << stoi(initList[3]) << std::endl;
    // std::cout << stoi(initList[4]) << std::endl;
    // std::cout << stoi(initList[5]) << std::endl;
    // std::cout << stoi(initList[6]) << std::endl;
    // std::cout << stoi(initList[7]) << std::endl;
    Trans(initList[0],stoi(initList[1]),stoi(initList[2]),stoi(initList[3]),stoi(initList[4]),stoi(initList[5]),stoi(initList[6]),stoi(initList[7]));
}

int Trans::getBuyDate() 
{
    return buyDate;    
}

int Trans::getSaleDate() 
{
    return saleDate;    
}

int Trans::investAmount() 
{
    return buyFee + (quantity*buyPrice);    
}

int Trans::profitLoss() 
{
    return (buyFee + (quantity*buyPrice)) - (saleFee + (quantity * salePrice));    
}