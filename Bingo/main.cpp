#include <iostream>
#include <ctime>

#include "UserInterface.h"
#include "Deck.h"

int main()
{

    std::ofstream outFile ("output.txt");
    // Initialize the random number generator
    unsigned int seed = (unsigned int) time(NULL);
    srand(seed);
    // bah, seed for every card!!!

    // Create a UI object and run it
    UserInterface ui;
    ui.run();
    
    // Deck jeff = Deck(3, 4, (4*3*3));

    // jeff.print(outFile);


}