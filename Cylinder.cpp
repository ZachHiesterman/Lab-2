/*
    Zach Hiesterman
    Computer Science Fall 2024
    Due: September 17th 2024
    Lab 2: Exploring Output and Classes
    This Lab is about learning and using outputs and classes to find out the surface area and volume of a Cylinder.
*/

#ifndef CYLINDER_H
#include <iostream>
#include <cmath>
#define CYLINDER_H

class Cylinder
{
public:
    
    Cylinder();
    ~Cylinder();

    void setRadius(double r);

    double getRadius();

    void setHeight(double h);

    double getHeight();

    double calcVolume();

    double calcSurfaceArea();

private:
    double radius;

    double height;

    double pi = 3.14159;
};

Cylinder::Cylinder()
{
    radius = 0.0;
    height = 0.0;
}

Cylinder::~Cylinder()
{
}

void Cylinder::setRadius(double r)
{
    radius = r;
}

double Cylinder::getRadius()
{
    return radius;
}

void Cylinder::setHeight(double h)
{
    height = h;
}

double Cylinder::getHeight()
{
    return height;
}

double Cylinder::calcVolume()
{
    return pi*pow(radius, 2)*height;
}

double Cylinder::calcSurfaceArea()
{
    return 2*pi*radius*height+2*pi*pow(radius, 2);
}

int main()
{
    Cylinder c;
    c.setRadius(4);
    c.setHeight(10);

    std::cout << "The volume of the cylinder is: " << c.calcVolume() << std::endl;
    std::cout << "The surface area of the cylinder is: " << c.calcSurfaceArea() <<std::endl;

    return 0;
}

#endif //!CYLINDER_H