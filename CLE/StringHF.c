#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char buffer[100];

    // Calculate the length of a string
    int len = strlen(str1);
    printf("Length of str1: %d\n", len);

    // Copy one string to another
    strcpy(buffer, str1);
    printf("Buffer after copying str1: %s\n", buffer);

    // Concatenate two strings
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Compare two strings

    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are unequal");
    }
    return 0;
}
