#pragma once
#define PI 3.14159

struct Circle
{
    double radius;
};

double CalculateCircleCircumference(struct Circle* c);
double CalculateCircleArea(struct Circle* c);
void GetCircle();