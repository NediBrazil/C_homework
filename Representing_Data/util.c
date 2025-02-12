#include <stdio.h>

void print_usage_error()
{
    printf("Invalid input");
}

void print_conversion_error()
{
    printf("Invalid input data.\n");
}

void print_overflow_error()
{
    printf("Overflow or underflow.\n");
}

void print_divide_error()
{
    printf("You try to divide by zero.\n");
}
