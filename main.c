#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    const int firstString = 30;
    char a[firstString];

    const int secondString = 30;
    char b[secondString];

    // Reads the strings
    printf("Please type the first string\n");
    fgets(a, firstString, stdin);

    printf("Please type the second string\n");
    fgets(b, secondString, stdin);

    // Tells if strings are equal
    if (strcmp(a,b) == 0)
        printf("are equal\n");
    else
        printf("are not equal\n");

    // Tells if the first string is a substring of another
    if (strstr(a,b) != NULL)
        printf("is a substring\n");
    else
        printf("is not a substring\n");

}

