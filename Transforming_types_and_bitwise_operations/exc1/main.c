#include <stdio.h>
#include "quadraticroots.h"

int main()
{
    int a1 = 2, b1 = 20, c1 = 3;
    QuadraticRootsResult res1 = findroots((double)a1, (double)b1, (double)c1);
    if (res1.norealroots)
    {
        printf("No real roots.\n");
    }
    else
    {
        printf("x1 = %.2f, x2 = %.2f\n", res1.x1, res1.x2);
    }

    float a2 = 1.0, b2 = -4.3, c2 = 2.3;
    QuadraticRootsResult res2 = findroots((double)a2, (double)b2, (double)c2);
    if (res2.norealroots)
    {
        printf("No real roots\n");
    }
    else
    {
        printf("x1 = %.2f, x2 = %.2f\n", res2.x1, res2.x2);
    }

    double a3 = 1.49320859920385, b3 = -7.3124412445, c3 = 2.33121241344;
    QuadraticRootsResult res3 = findroots((double)a3, (double)b3, (double)c3);
    if (res3.norealroots)
    {
        printf("No real roots\n");
    }
    else
    {
        printf("x1 = %.8f, x2 = %.8f\n", res3.x1, res3.x2);
    }
    return 0;
}
