#include <stdio.h>
#include "square.h"

double CalculateSquarePerimeter(struct SquarePerimeter* sp)
{
    return sp->side1 + sp->side2 + sp->side3 + sp->side4;
}

double CalculateSquareArea(struct SquareArea* sa)
{
    return sa->width * sa->height;
}

void GetSquarePerimeterOption()
{
        struct SquarePerimeter sp;

        printf("Please enter length of side1: ");
        scanf("%lf", &sp.side1);

        printf("Please enter length of side2: ");
        scanf("%lf", &sp.side2);

        printf("Please enter length of side3: ");
        scanf("%lf", &sp.side3);

        printf("Please enter length of side4: ");
        scanf("%lf", &sp.side4);

        double perimeter = CalculateSquarePerimeter(&sp);
        printf("Perimeter: %lf\n", perimeter);
}

void GetSquareAreaOption()
{
        struct SquareArea sa;

        printf("Please enter width: ");
        scanf("%lf", &sa.width);

        printf("Please enter height: ");
        scanf("%lf", &sa.height);

        double area = CalculateSquareArea(&sa);
        printf("Area: %lf\n", area);
}

void GetSquare()
{
    int option;

    do
    {
        printf("╔═════════════════════════════════════╗\n");
        printf("║ Please select an option for Square: ║\n");
        printf("║ 1 - Perimeter                       ║\n");
        printf("║ 2 - Area                            ║\n");
        printf("║ 0 - Exit                            ║\n");
        printf("╚═════════════════════════════════════╝\n");
        printf("> ");
        scanf("%d", &option);

        if (option == 1)
        {
            GetSquarePerimeterOption();
        }
        else if (option == 2)
        {
            GetSquareAreaOption();
        }

        printf("\n");
    } 
    while (option != 0);

    printf("\n");
}