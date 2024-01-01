#include <stdio.h>
#include "2d.h"
#include "Square/square.h"

void Get2D()
{
    int option;

    do
    {        
        printf("╔════════════════════════════════════════╗\n");
        printf("║ Welcome to the 2D geometry calculator. ║\n");
        printf("║ Please select an shape:                ║\n");
        printf("║ 1 - Square                             ║\n");
        printf("║ 0 - Exit                               ║\n");
        printf("╚════════════════════════════════════════╝\n");
        printf("> ");
        scanf("%d", &option);

        if (option == 1)
        {
            GetSquare();
        }
    } 
    while (option != 0);
}