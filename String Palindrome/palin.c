#include <stdio.h>
#include <string.h>
void main()
{
    char a[20], b[20];
    int i, j, count = 0;
    printf("Enter a Word For Reversing That Word : \n");
    gets(a);
    count = strlen(a);
    for (i = count - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';

    if (strcmp(a,b) == 0)
    {
        printf("%s is a Palindrome Word", a);
    }
    else
    {
        printf("%s is not a Palindrome Word", a);
    }
}
