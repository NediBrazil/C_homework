#include <stdio.h>
#include <stdlib.h>
#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)
DEFINE_COMMAND(quit, internal)
{
    printf("text1\n");
}

DEFINE_COMMAND(start, external)
{
    printf("text2\n");
}
int main()
{
    internal_quit_command();
    external_start_command();
    return 0;
}
