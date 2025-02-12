#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int length = strlength(argv[1]);
        printf("the length of '%s': %d\n", argv[1], length);
        return 0;
    }
    printf("Invalid input");
    return 0;
}
