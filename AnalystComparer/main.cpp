// #include "Comparer.h"
// #include "Utils.h"
#include "Trans.h"
#include "History.h"

// Note that the two parameters give you an array of program arguments and the count of things in that array.

int main(int argc, char* argv[])
{
    // Declare (and create) a comparer object
    // Comparer comparer;
    History("220\n10000000\n7\nAMZN,30,5256400,51200,995,5306400,63000,995\nMSFT,50,5261760,4820,995,5282160,4950,500\nMSFT,40,5273280,4840,995,5336760,4910,795\nMSFT,20,5292154,5124,995,5355940,4920,795\nMSFT,15,5294343,5020,995,5296240,5040,795\nAMZN,20,5299760,63000,995,5388700,59000,995\nAMZN,20,5291200,62613,995,5508280,68000,500");
    
    // Have the comparer load all the input files and then do the comparison,
    // which creates the output file
    // if (comparer.load(argc, argv)==0)
    //     comparer.compare();
}
