#include <stdio.h>
#include "lights.h"
void switch_lights(unsigned char *state, int room)
{
    if (room < 1 || room > 8)
    {
        printf("Invalid room number\n");
        return;
    }

    *state = *state ^ (1 << (room - 1));
}
void print_state(unsigned char state)
{
    printf("The light is on in rooms: ");
    int has_lights_on = 0;

    for (int i = 0; i < 8; i++)
    {
        if ((state) & (1 << i))
        {
            printf("%d ", i + 1);
            has_lights_on = 1;
        }
    }
    printf("\n\n");
}