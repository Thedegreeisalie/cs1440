#ifndef HISTORY_H
#define HISTORY_H


#include "Trans.h"

class History 
{
    private:
        int simulationDays, seed, transTotal, currentTrans;
        std::vector<Trans> history;
        
    public:
        History(std::string);
        int getSimDays();
        int getSeed();
        int totalProfitLoss();
        int profitLossByDay();
        void reset();
        Trans next();
};

#endif