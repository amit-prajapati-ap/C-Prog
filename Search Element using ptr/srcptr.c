#include <stdio.h>
void search(int a[], int n)
{
    int src, loc = 0, flag = 0;
    printf("Enter The element That you want to search : \n");
    scanf("%d", &src);
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) == src)
        {
            loc = i + 1;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Element Does Not Exists");
    }
    else
    {
        printf("Element %d are found at location %d", src, loc);
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
    search(a, n);
}