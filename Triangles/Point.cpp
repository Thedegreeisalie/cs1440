//
// Created by Stephen Clyde on 2/3/17.
//
#include <iostream>
#include <string>
#include <cmath>
#include "Point.h"
#include "Edge.h"
#include "Utils.h"

Point::Point(double x, double y, double z) : m_x(x), m_y(y), m_z(z)
{
    checkForInfinity();
}

Point::Point(const char *str)
{
    std::string coordinateStr = str;
    initialize(coordinateStr);
}

Point::Point(std::string& coordinateStr)
{
    initialize(coordinateStr);
}

// Checks to see if this point equal (is with a small distance from another point)
//
// Return true if the other point is less then the minimum distance from this point.
// To do the check, this function creates an edge from this and the other point and
// gets the length of that edge.
bool Point::isEquivalentTo(const Point &otherPoint) const
{
    
    if (!(m_valid && otherPoint.m_valid))
        return false;

    Edge edge(this, &otherPoint);
    // std::cout << edge.getLength() << std::endl;
    // std::cout << (edge.getLength() > m_minDistance) << std::endl;
    return (edge.getLength() > m_minDistance);
}
//More documentation would be appreciated
void Point::initialize(const std::string &pointStr)
{
    std::string values[3];
    if (split(pointStr, ',', values, 3))
    {
        m_x = convertStringToDouble(values[0], &m_valid);
        m_y = convertStringToDouble(values[1], &m_valid);
        m_z = convertStringToDouble(values[2], &m_valid);
        // std::cout << m_x << std::endl;
        // std::cout << m_y << std::endl;
        // std::cout << m_z << std::endl;
        // this works yo 
        checkForInfinity();
    }
}

// Computes m_valid based on whether any of the points are infinity
void Point::checkForInfinity()
{
    // std::cout << (m_x != INFINITY) << std::endl;
    // std::cout << (m_y != INFINITY) << std::endl;
    // std::cout << (m_z != INFINITY) << std::endl;
    // sneaky sneaky
    m_valid = (m_x != INFINITY && m_y != INFINITY && m_z != INFINITY);
}
