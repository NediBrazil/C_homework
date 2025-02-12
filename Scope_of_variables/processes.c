#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "processes.h"
Process processes[5];
int processescount = 0;
static int nextid = 1;

static int nextprocessid()
{
    if (nextid > 0)
        return nextid++;
    return 0;
}

int createnewprocess(const char *name)
{
    if (processescount >= 5)
    {
        printf("You are trying to exceed the limit of maximum permitted processes");
        return 0;
    }

    int id = nextprocessid();
    if (id == 0)
        return 0;

    processes[processescount].id = id;
    strncpy(processes[processescount].name, name, 20);
    processescount++;
    return id;
}

void stopprocess(int id)
{
    for (int i = 0; i < processescount; i++)
    {
        if (processes[i].id == id)
        {
            for (int j = i; j < processescount - 1; j++)
            {
                processes[j] = processes[j + 1];
            }
            processescount--;
            return;
        }
    }
}
