#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

double getDouble();

double y(const double x);

int main()
{
    printf("Enter x: ");
    double x = getDouble();
    printf("y = %lf",y(x));
    return 0;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}

double y(const double x)
{
    if (x>3.1)
        {
            return x;
        }
    if (x<3.1)
        {
            if (abs(x-3)<DBL_EPSILON)
            {
                printf("fubction is not define\n");
                exit(1);
            }
            return  1/(x-3);
        }
    if (abs(x-3.1)<DBL_EPSILON) 
        {
            return 1;
        }
}
