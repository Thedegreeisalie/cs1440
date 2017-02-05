#include "History.h"

History::History(std::string past)
{    
    std::vector<std::string> initList;
    // std::cout << past.find("\n") << std::endl;
    while(past.find("\n") != std::string::npos)
    {
        initList.push_back(past.substr(0, past.find("\n")));
        // std::cout << "initList = " << initList[initList.size() -1] << std::endl;
        past.erase(0, past.find("\n")+1);
    }
    
    simulationDays = stoi(initList[0]);
    seed = stoi(initList[1]);
    transTotal = stoi(initList[2]);
    
    for(int i = 3; i < transTotal; i++)
    {
        history.push_back(Trans(initList[i]));
    }
    // std::cout << history[0].getSaleDate() << std::endl;
}


int History::getSimDays() 
{
    return simulationDays;
}

int History::getSeed()
{
    return seed;
}

int History::totalProfitLoss()
{
    std::cout << "goofy" << std::endl;
    int total = seed;
    for(int i = 0; i < history.size() -1; i++)
    {
        total += history[i].profitLoss();
    }
    return total;
}

int History::profitLossByDay()
{
    std::cout << "regular" << std::endl;
    return 2;
}

void History::reset()
{
    std::cout << "han" << std::endl;
}

Trans History::next()
{
    std::cout << "solo" << std::endl;
}