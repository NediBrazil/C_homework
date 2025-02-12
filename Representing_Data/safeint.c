#include <stdlib.h>
#include <limits.h>
#include "safeint.h"

SafeResult safeadd(int a, int b)
{
    SafeResult result;

    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b))
    {
        result.errorflag = 1;
        result.value = 0;
    }
    else
    {
        result.errorflag = 0;
        result.value = a + b;
    }

    return result;
}

SafeResult safesubtract(int a, int b)
{
    SafeResult result;

    if ((b < 0 && a > INT_MAX + b) || (b > 0 && a < INT_MIN + b))
    {
        result.errorflag = 1;
        result.value = 0;
    }
    else
    {
        result.errorflag = 0;
        result.value = a - b;
    }

    return result;
}

SafeResult safemultiply(int a, int b)
{
    SafeResult result;
    if (a > INT_MAX / b || a < INT_MIN / b)
    {
        result.errorflag = 1;
        result.value = 0;
    }
    else
    {
        result.errorflag = 0;
        result.value = a * b;
    }
    return result;
}

SafeResult safedivide(int a, int b)
{
    SafeResult result;
    if (b == 0)
    {
        result.errorflag = 1;
        result.value = 0;
    }
    else
    {
        result.errorflag = 0;
        result.value = a / b;
    }
    return result;
}

SafeResult safestrtoint(char str[])
{
    SafeResult result;
    char *endptr;
    long int temp = strtol(str, &endptr, 10);

    if (*endptr != '\0' || temp < INT_MIN || temp > INT_MAX)
    {
        result.errorflag = 1;
        result.value = 0;
    }
    else
    {
        result.errorflag = 0;
        result.value = (int)temp;
    }
    return result;
}
