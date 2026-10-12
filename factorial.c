#include <stdio.h>
#include <stdlib.h>

int getValue(const char* message);
void check(const int n);
long int getFactorial(const int n);

int main()
{
    double n = getValue("Enter value: ");
    check(n);
    printf("Factorial is %ld\n", getFactorial(n));
    return 0;
}

int getValue(const char* message)
{
    if (message != NULL)
    {
        printf("%s\n",message);
    }
    int value = 0;
    if (scanf("%d", &value)!= 1)
    {
        printf("Input error");
        exit(1);
    }
    return value;
}

void check(const int n)
{
    if (n<0)
    {
        printf("Error, n have to be positive\n");
        exit(1);
    }
}

long int getFactorial(const int n)
{
    if (n<=1)
    {
        return 1;
    }
    return n*getFactorial(n-1);
}

