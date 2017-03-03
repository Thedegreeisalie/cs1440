//
// Created by Stephen Clyde on 2/16/17.
//

#ifndef BINGO_DECK_H
#define BINGO_DECK_H

#include <ostream>


#include "Card.h"

// TODO: Extend this definition as you see fit

class Deck {
    
    private:
        std::vector<Card> yugeDeck;
        int cardCount;

    public:
        Deck(int cardSize, int cardCount, int numberMax);
        ~Deck();
    
        void print(std::ostream& out) ;
        void print(std::ostream& out, int cardIndex) ;
};

#endif //BINGO_DECK_H
