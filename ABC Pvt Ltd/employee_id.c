#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    char *ptr;
    char a, b;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Number of chars in your %d's Employee ID \n", i + 1);
        scanf("%d", &n);
        getchar();
        printf("Enter Character Of A = ");
        scanf("%c", &a);
        getchar();
        printf("Enter character Of B = ");
        scanf("%c", &b);
        ptr = (char *)malloc((n + 1) * sizeof(char));
        printf("Enter %d's Employee ID ", i + 1);
        scanf("%s", ptr);
        printf("Your %d's Employee ID is %s", i + 1, ptr);
        free(ptr);
        printf("\n\n");
    }
}