#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "quadraticroots.h"
QuadraticRootsResult findroots(double a, double b, double c)
{
    QuadraticRootsResult result;
    double Discriminant = b * b - 4 * a * c;
    printf("%.2f\n", Discriminant);
    if (Discriminant < 0)
    {
        result.norealroots = 1;
        return result;
    }
    else if (Discriminant == 0)
    {
        result.norealroots = 0;
        result.x1 = -(b / 2 * a);
        result.x2 = result.x1;
        return result;
    }
    else
    {
        result.norealroots = 0;
        result.x1 = (-b + sqrtl(Discriminant)) / (2 * a);
        result.x2 = (-b - sqrtl(Discriminant)) / (2 * a);
        return result;
    }
}
