#ifndef BINGO_CARD_H
#define BINGO_CARD_H

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

class Card 
{
    private:
        int cardSize, cardCount, numberMax, minValue, range;
    public: 
        Card(int size, int count, int max);
        //~Card();
        
        void print(std::ostream& out);

};


#endif