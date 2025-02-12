#include <stdlib.h>
#include <string.h>
#include "transformation.h"

struct transformation string_to_long(char *input)
{
    struct transformation output;
    char *ptr;

    output.result = 0;
    strcpy(output.error, "\0");

    if (strlen(input) == 0)
    {
        strcpy(output.error, "Input is empty");
        return output;
    }

    output.result = strtol(input, &ptr, 10);

    if (*ptr != '\0')
    {
        output.result = 0;
        strcpy(output.error, "Invalid input string");
    }
    return output;
}
