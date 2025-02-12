#include <stdio.h>
#include <stdlib.h>
#include "processes.h"

int main()
{
    int choice;
    char name[20];
    int id;
    int exit = 0;
    while (1)
    {
        printf("1. Create new process\n");
        printf("2. List processes\n");
        printf("3. Stop a process\n");
        printf("4. Exit\n");
        printf("Select an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter process name: ");
            scanf("%s", name);
            int result = createnewprocess(name);
            printf("id: %d\n", result);
            break;

        case 2:
            for (int i = 0; i < processescount; i++)
            {
                printf("Process id: %d, Name: %s\n", processes[i].id, processes[i].name);
            }
            break;

        case 3:
            printf("Enter the id of the process you want to stop ");
            scanf("%d", &id);
            stopprocess(id);
            break;

        case 4:
            exit = 1;
            break;

        default:
            printf("Invalid choice\n");
        }
        if (exit)
        {
            return 0;
        }
    }
    return 0;
}
