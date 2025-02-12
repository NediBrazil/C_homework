#include <stdio.h>
#include <stdlib.h>

#define SWAP(A, B, TYPE) \
    {                    \
        TYPE temp = A;   \
        A = B;           \
        B = temp;        \
    }
int main()
{
    int x = 5, y = 10;
    SWAP(x, y, int);
    printf("x = %d, y = %d\n", x, y);

    float a = 3.5f, b = 7.2f;
    SWAP(a, b, float);
    printf("a = %.2f, b = %.2f\n", a, b);

    char c1 = 'A', c2 = 'B';
    SWAP(c1, c2, char);
    printf("c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
