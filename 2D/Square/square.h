#pragma once 

struct SquarePerimeter
{
    double side1;
    double side2;
    double side3;
    double side4;
};

struct SquareArea
{
    double width;
    double height;
};

double CalculateSquarePerimeter(struct SquarePerimeter* sp);
double CalculateSquareArea(struct SquareArea* sa);
void GetSquare();