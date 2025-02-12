#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 8
int power(int num)
{
    int result = 1;
    if (!num)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            result *= 2;
        }
    }
    return result;
}
int main()
{
#if defined ARRAY_SIZE && ARRAY_SIZE > 0 && ARRAY_SIZE < 11
    int arr[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        arr[i] = power(i);
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d\n", arr[i]);
    }

#else
    printf("Array size is not supported by the app\n");
#endif

    return 0;
}
