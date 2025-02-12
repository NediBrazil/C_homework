#include <stdio.h>
#include <stdlib.h>
#define DEBUG(VAR) printf("file: %s, line: %d, name: %s, value: %d\n", __FILE__, __LINE__, #VAR, VAR);
int main()
{
    int num = 4;
    DEBUG(num)
    return 0;
}
