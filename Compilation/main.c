#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transformation.h"

int main()
{
    char *inputs[] = {
        "-123",
        "12ab34",
        ""};

    for (int i = 0; i < 3; i++)
    {
        struct transformation result = string_to_long(inputs[i]);

        if (strlen(result.error) == 0)
        {
            printf("%s Result: %ld\n", inputs[i], result.result);
        }
        else
        {
            printf("%s Error: %s\n", inputs[i], result.error);
        }
    }

    return 0;
}
