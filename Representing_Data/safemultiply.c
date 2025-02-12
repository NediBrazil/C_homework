#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        print_usage_error();
        return 1;
    }

    SafeResult result1 = safestrtoint(argv[1]);
    SafeResult result2 = safestrtoint(argv[2]);

    if (result1.errorflag || result2.errorflag)
    {
        print_conversion_error();
        return 1;
    }

    SafeResult result = safemultiply(result1.value, result2.value);

    if (result.errorflag)
    {
        print_overflow_error();
    }
    else
    {
        printf("%d\n", result.value);
    }

    return 0;
}
