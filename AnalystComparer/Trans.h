#ifndef TRANS_H
#define TRANS_H

#include <string>
#include <iostream>
#include <vector>

// Transaction has symbol, quantity, buyDate, buyFee, saleDate, saleFee, salePrice
class Trans 
{
    private:
        int quantity, buyDate, buyFee, buyPrice, saleDate, saleFee, salePrice;
        std::string symbol;
        
    public:
        Trans(std::string, int, int, int, int, int, int, int);
        Trans(std::string);
        std::string getSmbol();
        int getBuyDate();
        int getSaleDate();
        int investAmount();
        int profitLoss();
};
#endif