#include <stdio.h>
#include <string.h>
void main()
{
    char a[20], b[20];
    int i, j,count=0;
    printf("Enter a Word For Reversing That Word : \n");
    gets(a);
    count=strlen(a);
    for (i = count-1, j = 0; i>=0; i--, j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';
    printf("Reversal of %s is %s",a,b);
}