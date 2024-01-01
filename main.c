#include <stdio.h>
#include "2D/2D.h"

int main()
{
    int option;

    do
    {        
        printf("╔═════════════════════════════════════╗\n");
        printf("║ Welcome to the geometry calculator. ║\n");
        printf("║ Please select an option:            ║\n");
        printf("║ 1 - 2D Geometry                     ║\n");
        printf("║ 0 - Exit                            ║\n");
        printf("╚═════════════════════════════════════╝\n");
        printf("> ");
        scanf("%d", &option);

        if (option == 1)
        {
            Get2D();
        }
    } 
    while (option != 0);
    
    return 0;
}