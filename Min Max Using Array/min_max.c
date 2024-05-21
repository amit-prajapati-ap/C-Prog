#include <stdio.h>
typedef int in;
void sorting(in a[], in n)
{
    in temp;
    for (in i = 0; i < n; i++)
    {
        for (in j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void main()
{
    in a[20], n, min, max;
    printf("Enter Number Of array: \n");
    scanf("%d", &n);
    printf("Enter The Elements Of Array: \n");
    for (in i = 0; i < n; i++)
    {
        scanf("%d,", &a[i]);
    }
    sorting(a, n);
    printf("Minimum Number in given array is %d\n", a[0]);
    printf("Maximum Number In Given array is %d", a[n - 1]);
}