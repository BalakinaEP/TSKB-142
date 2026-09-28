#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

double getInt();

enum Day
{
    MONDAY = 1,
    TUESDAY
};

int main()
{
    printf("Enter week day %d - Monday, %d - Tuesday: ",MONDAY,TUESDAY);
    int day = getInt();
    switch (day)
    {
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        default:
            printf("Other day\n");
            break;
    }    
    return 0;
}

double getInt()
{
    int value = 0;
    if (scanf("%d",&value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}

