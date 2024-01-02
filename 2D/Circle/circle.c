#include <stdio.h>
#include "circle.h"

double CalculateCircleCircumference(struct Circle* c)
{
    return 2 * PI * c->radius;
}

double CalculateCircleArea(struct Circle* c)
{
    double radSquared = c->radius * c->radius;
    return PI * radSquared;
}

void GetCircleCircumferenceOption()
{
    struct Circle c;

    printf("Please enter the length of the radius: ");
    scanf("%lf", &c.radius);

    double circumference = CalculateCircleCircumference(&c);
    printf("Circumference: %lf\n", circumference);
}

void GetCircleAreaOption()
{
    struct Circle c;

    printf("Please enter the length of the radius: ");
    scanf("%lf", &c.radius);

    double area = CalculateCircleArea(&c);
    printf("Area: %lf\n", area);
}

void GetCircle()
{
    int option;

    do
    {
        printf("╔═════════════════════════════════════╗\n");
        printf("║ Please select an option for Circle: ║\n");
        printf("║ 1 - Circumference                   ║\n");
        printf("║ 2 - Area                            ║\n");
        printf("║ 0 - Exit                            ║\n");
        printf("╚═════════════════════════════════════╝\n");
        printf("> ");
        scanf("%d", &option);

        if (option == 1)
        {
            GetCircleCircumferenceOption();
        }
        else if (option == 2)
        {
            GetCircleAreaOption();
        }
        
        printf("\n");
    } 
    while (option != 0);

    printf("\n");
}