#include <stdio.h>
#include <math.h>

void power(long arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = pow(arr[i], 4);
    }
}

int main()
{
    long arr[] = {5, 4, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    power(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%ld ", arr[i]);
    }
    printf("\n");

    return 0;
}
