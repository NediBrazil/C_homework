#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define PRINT(signed_format, type, signed_max, signed_min, unsigned_format, unsigned_max) \
    printf("%-20s | %-20s | %-20zu | %-20lld | %-20lld | %-20s | %-20llu\n",              \
           #type, signed_format, sizeof(type),                                            \
           (long long)(signed_max), (long long)(signed_min),                              \
           unsigned_format, (unsigned long long)(unsigned_max))

int main()
{
    printf("%-20s | %-20s | %-20s | %-20s | %-20s | %-20s | %-20s\n",
           "Type", "Format", "Size", "SignedMax", "SignedMin", "UnsignedFormat", "UnsignedMax");
    PRINT("%d", int, INT_MAX, INT_MIN, "%u", UINT_MAX);
    PRINT("%c", char, SCHAR_MAX, SCHAR_MIN, "%hhu", UCHAR_MAX);
    PRINT("%ld", long, LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);
    PRINT("%hd", short, SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);
    PRINT("%lld", long long, LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);
    return 0;
}
