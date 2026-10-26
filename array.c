#include <stdio.h>
#include <stdlib.h>

void IsPositive(const int size);
void PrintArr(const int arr[],const int size);
size_t GetSize(const int size);

int main() 
{
int arr[5]={10,20};
size_t length = sizeof(arr)/sizeof(arr[0]);
printf("Lenght is %u\n",length);
PrintArr(arr,length);
return 0;
}

void PrintArr(const int arr [],const int size)
{
    size_t length = GetSize(size);
    for (size_t i = 0; i < length; i++)
    {
        printf("arr[%u] = %d\n",i,arr[i]);
    }
}

void IsPositive(const int size)
{
    if (size <= 0)
    {
        printf("Error, size has to be positive");
        exit(1);
    }
}

size_t GetSize(const int size)
{
    IsPositive(size);
    return (size_t)size;
}
