#include <stdio.h>
#include <string.h>

int main() 
{
    const char str1 [12] = "Hello world";
    const char str2 [] = "Hello ";
    size_t length = strlen(str1);
    printf("String length is :%zu \n", length);
    
    for (size_t i = 0; i<length; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");
    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
    char subStr [] = "world";
    char * subStrPtr = strstr(str1, subStr);
    if (subStrPtr)
    {
        printf("substrict index is %ld\n",subStrPtr - str1);
    }
    else
    {
        printf("Substring is not found\n");
    }
   // strncpy(str2,str1,5);
    //printf("%s\n",str2);
    
    return 0;

}
