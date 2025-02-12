#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        int comparison = strcompare(argv[1], argv[2]);
        printf("Comparison result: %d\n", comparison);
        return 0;
    }
    printf("Invalid input");
    return 0;
}
