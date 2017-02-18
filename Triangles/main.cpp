#include <iostream>
#include "Triangle.h"

int main() {
    // Point p1 = Point("1,2,3");
    // Point p2 = Point("3,2,1");
    // Point p3 = Point("2,1,3");

    // std::cout << p2.isValid() << std::endl;
    // if(p1.isEquivalentTo(p1))
    // {
    //     std::cout << "Equivalent might work" << std::endl;
    // }
    // if(p1.isEquivalentTo(p2))
    // {
    //     std::cout << "Equivalent don't work" << std::endl;
    // }
    std::string userInput;
    bool keepGoing = true;
    while (keepGoing)
    {
        std::cout << "Enter a triangle, in the x1,y1,z1|x2,y2,z2|x3,y3,z3 format, or EXIT?" << std::endl;
        std::cin >> userInput;
        if (userInput=="EXIT")
        {
            keepGoing = false;
        }
        else
        {
            Triangle triangle(userInput);
            std::cout << "Type = " << triangle.getTriangleType() << std::endl;
            std::cout << "Area = " << triangle.computerArea() << std::endl;
            std::cout << std::endl;
        }
        


    }
    return 0;
}