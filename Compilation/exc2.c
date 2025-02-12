#include <stdio.h>
#include <stdlib.h>

int NOD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int NOK(int a, int b)
{
    return (a * b) / NOD(a, b);
}

int main()
{
    int a = 12, b = 18;
    printf("NOK of %d and %d is %d\n", a, b, NOK(a, b));
    return 0;
}