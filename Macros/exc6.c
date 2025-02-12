#include <stdio.h>
#include <stdlib.h>

#define SWAP(a, b, type) \
    {                    \
        type temp = a;   \
        a = b;           \
        b = temp;        \
    }

#define SORT(array, size, type, compare)                    \
    {                                                       \
        for (int i = 0; i < (size) - 1; i++)                \
        {                                                   \
            for (int j = 0; j < (size) - i - 1; j++)        \
            {                                               \
                if ((array)[j] compare(array)[j + 1])       \
                {                                           \
                    SWAP((array)[j], (array)[j + 1], type); \
                }                                           \
            }                                               \
        }                                                   \
    }

int main()
{
    int array[] = {6, 2, 5, 3, 7};
    int size = sizeof(array) / sizeof(array[0]);

    SORT(array, size, int, >);
    printf("Ascending order: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, size, int, <);
    printf("Descending order: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
