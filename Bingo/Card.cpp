#include "Card.h"

Card::Card(int size, int count, int max)
{
    this-> cardSize = size;
    this-> cardCount = count;
    this-> numberMax = max;
    this-> minValue =(2*cardSize*cardSize);
    if(numberMax != minValue)
    {
        this-> range = (numberMax - minValue);
    }
    else
    {
        this-> range = minValue;
    }
    std::vector<int> numbers;
}

void Card::print(std::ostream& out)
{

    for (int j = 0; j < this->cardSize; j++)
    {
        for (int i = 0; i < this->cardSize; i++)
        {
            out << "+----";
        }
        out<<"+"<<std::endl;
        
        //generate cardsize^2 numbers between 0 and numberMax-(2*cardSize*cardSize) then add cardSize
        for (int i = 0; i < this->cardSize; i++)
        {
            out << "|" << std::setw(4) << std::left <<(rand() % range + (minValue));
        }
        out << "|" << std::endl;
    }
        for (int i = 0; i < this->cardSize; i++)
        {
            out << "+----";
        }
        out<<"+"<<std::endl;
}