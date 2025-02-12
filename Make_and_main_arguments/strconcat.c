#include <stdio.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        if (strlen(argv[1]) > 50 || strlen(argv[2]) > 50)
        {
            printf("The string exceeds the max lenght\n");
            return 0;
        }
        char result[100];
        strconcat(result, argv[1], argv[2]);
        printf("Concatenated string: %s\n", result);
        return 0;
    }
    printf("Invalid input");
    return 0;
}
