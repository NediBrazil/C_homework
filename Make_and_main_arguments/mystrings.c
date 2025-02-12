#include "mystrings.h"
#include <string.h>
int strlength(char str[])
{
    return strlen(str);
}
void strconcat(char result[], char str1[], char str2[])
{
    strcpy(result, str1);
    strcat(result, str2);
}
int strcompare(char str1[], char str2[])
{
    return strcmp(str1, str2);
}