#include <stdio.h>
void binarysrc(int arr[], int n)
{
    typedef int in;
    in src, loc, flag = 0, temp;
    for (in i = 0; i < n; i++)
    {
        for (in j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("After sorting : ");
    for (in i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\nEnter The element that you want to search : \n");
    scanf("%d", &src);
    for (in i = 0; i < n; i++)
    {
        if (arr[i] == src)
        {
            loc = i + 1;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Element Are not Exist");
    }
    else
    {
        printf("Element %d are found at Location %d", src, loc);
    }
}
void main()
{
    int arr[20], n;
    printf("Enter The Number of elements : \n");
    scanf("%d", &n);
    printf("Enter The elements Of The given array size %d : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    binarysrc(arr, n);
}