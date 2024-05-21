#include <stdio.h>
void main()
{
    int a[20], b[20], n;
    printf("Enter the Number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements inside array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
    printf("Numbers In reverse order : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}