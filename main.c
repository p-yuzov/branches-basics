#include <conio.h>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#define SCHOOL_COUNT 5
struct school
{
    int Number;
    int Leaver;
    int Student;
    double PercentStudent;
};
school citySchools[SCHOOL_COUNT];
int main()
{
    for (int i = 0; i < SCHOOL_COUNT; i++) {
        printf("\n введите номер школы, кол-вол выпускников, кол-во поступивших:\n");
        scanf("%i%i%i", &citySchools[i].Number, &citySchools[i].Leaver, &citySchools[i].Student);
        citySchools[i].PercentStudent = (double) 100 * citySchools[i].Student
                                        / citySchools[i].Leaver;
    }
    return 0;
}
