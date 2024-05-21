#include <stdio.h>
void sort(int a[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(a + j) > *(a + j + 1))
            {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
    printf("\nElements after sorting : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }
}
void main()
{
    int a[20], n;
    printf("Enter The Number of Element : \n");
    scanf("%d", &n);
    printf("Enter The Elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements before sorting : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", *(a + i));
    }
    sort(a, n);
}