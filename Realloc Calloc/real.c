#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Enough memory not available");
    }
    else
    {
        printf("Enter the elements : \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &*(ptr + i));
        }
        printf("Elements are : \n");
        for (int i = 0; i < n; i++)
        {
            printf("Address = %d , Element = %d \n", ptr + i, *(ptr + i));
        }
    }
    printf("Enter the New number of elements: \n");
    scanf("%d", &n);
    realloc(ptr, n);
    if (ptr == NULL)
    {
        printf("Enough memory not available");
    }
    else
    {
        printf("Enter the elements : \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &*(ptr + i));
        }
        printf("Elements are : \n");
        for (int i = 0; i < n; i++)
        {
            printf("Address = %d , Element = %d \n", ptr + i, *(ptr + i));
        }
    }
    free(ptr);
}