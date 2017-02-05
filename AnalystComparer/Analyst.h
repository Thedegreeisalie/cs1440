#ifndef ANALYST_H
#define ANALYST_H

#include <vector> 
#include "Trans.h"

class Analyst {
    private:
        std::string name, hist, inits;
        int howLong;
        std::vector<Trans> history;
        
    public:
        Analyst(std::string name, std::string inits, int howLong, std::string hist);
        Trans* getHistory();
        
};

#endif