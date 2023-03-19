#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_length(char *str);
void string_copy(char *dest, char *src);
void string_concat(char *dest, char *src);
int string_compare(char *str1, char *str2);

int main()
{
    char str1[100], str2[100], copy[100], concat[200];
    
    // Input two strings from user
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    // Print the length of the first string
    printf("Length of the first string: %d\n", string_length(str1));
    
    // Copy the first string into a new variable
    string_copy(copy, str1);
    printf("Copy of the first string: %s\n", copy);
    
    // Concatenate the two strings and print the result
    string_concat(concat, str1);
    string_concat(concat, str2);
    printf("Concatenation of the two strings: %s\n", concat);
    
    // Compare the two strings and print the result
    if (string_compare(str1, str2) == 0) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }
    
    return 0;
}

// Function to calculate the length of a string
int string_length(char *str)
{
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

// Function to copy one string to another
void string_copy(char *dest, char *src)
{
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// Function to concatenate two strings
void string_concat(char *dest, char *src)
{
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// Function to compare two strings
int string_compare(char *str1, char *str2)
{
    while (*str1 == *str2) {
        if (*str1 == '\0' || *str2 == '\0') {
            break;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0') {
        return 0;
    } else {
        return -1;
    }
}