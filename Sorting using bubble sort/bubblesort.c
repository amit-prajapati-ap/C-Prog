#include <stdio.h>
void sort(int arr[], int n);
void sort2(int a[], int n);
void main()
{
    int a[20], n;
    printf("Enter The number of elements : \n");
    scanf("%d", &n);
    printf("Enter the elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
    sort2(a, n);
}
void sort(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; i++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array After sorting :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void sort2(int a[], int n)
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