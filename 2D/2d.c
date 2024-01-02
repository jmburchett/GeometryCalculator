#include <stdio.h>
#include "2d.h"
#include "Square/square.h"
#include "Circle/circle.h"

void Get2D()
{
    int option;

    do
    {        
        printf("╔════════════════════════════════════════╗\n");
        printf("║ Welcome to the 2D geometry calculator. ║\n");
        printf("║ Please select an shape:                ║\n");
        printf("║ 1 - Square                             ║\n");
        printf("║ 2 - Circle                             ║\n");
        printf("║ 0 - Exit                               ║\n");
        printf("╚════════════════════════════════════════╝\n");
        printf("> ");
        scanf("%d", &option);

        if (option == 1)
        {
            GetSquare();
        }
        else if (option == 2)
        {
            GetCircle();
        }
    } 
    while (option != 0);
}