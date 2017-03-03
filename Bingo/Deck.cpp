//
// Created by Stephen Clyde on 2/16/17.
// Edited by Jeremiah Moore sometime after that
//

#include "Deck.h"

Deck::Deck(int cardSize, int cardCount, int numberMax)
{
    this->cardCount = cardCount;
    //create card count cards
    for (int i =0; i < cardCount; i++)
    {
        yugeDeck.push_back(Card(cardSize, cardCount, numberMax));
    }
}

Deck::~Deck()
{
    // TODO: Implement
    for (int i =0; i <= this->cardCount; i++)
    {
        // delete *yugeDeck[i];
    }
}

void Deck::print(std::ostream& out) 
{
    // TODO: Implement
    for (int i =0; i < cardCount; i++)
    {
        out << "card #" << i+1 << std::endl;
        yugeDeck[i].print(out);
    }
}

void Deck::print(std::ostream& out, int cardIndex) 
{
    // TODO: Implement
    yugeDeck[cardIndex].print(out);
}



