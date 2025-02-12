#include <stdio.h>
#include <stdlib.h>
#define MAX(a, b) (a) > (b) ? (a) : (b)
int main()
{
    printf("The larger number is: %d\n", MAX(3, 4));
    return 0;
}
