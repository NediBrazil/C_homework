#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define DEBUG
void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_sum(int arr[], int size)
{
#ifdef DEBUG
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
#endif
    int sum = 0;
    for (int i = 0; i < size; i += 3)
    {
#ifdef DEBUG
        printf("%d", arr[i]);
#endif
        sum = sum + arr[i];
    }
    printf("\n%d", sum);
}
int main()
{
    int arr[SIZE] = {6, 2, 8, 3, 5};
    sort(arr, SIZE);
    print_sum(arr, SIZE);
    return 0;
}
