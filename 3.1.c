
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>


double getValue(const char* message);
void checkStep(const double step);
void checkSegment(const double xbegin,const double xend);
bool isOOF(const double x);
double getY(const double x);

int main()
{
    double xbegin = getValue("Enter segment start: ");
    double xend = getValue("Enter segment end: ");
    double step = getValue("Enter step: ");
    checkStep(step);
    checkSegment(xbegin,xend);
    for (double x = xbegin; x < xend + step; x += step)
    {
        if (isOOF(x))
            {
                printf("x = %lf, y = %lf\n",getY(x));
            }
        else
            {
                printf("y is not define\n");
            }
    }
    return 0;
}

double getValue(const char* message)
{
    if (message != NULL)
    {
        printf("%s\n",message);
    }
    double value = 0;
    if (scanf("%lf", &value)!= 1)
    {
        printf("Input error");
        exit(1);
    }
    return value;
}

void checkStep(const double step)
{
    if (step<=0)
    {
        printf("Error, step have to be positive");
        exit(1);
    }
}

void checkSegment(const double xbegin,const double xend)
{
    if (xbegin > xend)
    {
        printf("Error, segment begin have to be "
        "less or equal segment end");
        exit(1);
    }
}

bool isOOF(const double x)
{
    return (fabs(x - 1.2)>=FLT_EPSILON);
}

double getY(const double x)
{
    return 1/pow(x - 1.2,2);
}
