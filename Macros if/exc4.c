#include <stdio.h>
#include <stdlib.h>
#include "schoolclass.h"
#include "schoolroom.h"

struct School
{
    struct SchoolClass classes[20];
    struct SchoolRoom rooms[10];
};

int main()
{
    struct School school;

    school.classes[0].classNumber = 1;
    school.classes[0].classLetter = 'A';
    school.classes[0].students[0].birthYear = 2005;

    school.rooms[0].roomNumber = 101;

    printf("Class Number: %d, Class Letter: %c\n", school.classes[0].classNumber, school.classes[0].classLetter);
    printf("Room Number: %d\n", school.rooms[0].roomNumber);

    return 0;
}
