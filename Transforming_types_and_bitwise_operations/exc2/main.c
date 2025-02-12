#include <stdio.h>
#include "lights.h"

int main()
{
    unsigned char lights = 0;
    int choice, room;

    while (1)
    {
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Select an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter room number (1-8): ");
            scanf("%d", &room);
            switch_lights(&lights, room);
            break;
        case 2:
            print_state(lights);
            break;
        case 3:
            return 0;
        default:
            printf("Invalid input\n");
        }
    }

    return 0;
}
