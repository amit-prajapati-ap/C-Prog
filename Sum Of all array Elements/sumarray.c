#include <stdio.h>
int sum(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + *(a + i);
    }
    return s;
}
void main()
{
    int a[20], n, ans;
    printf("Enter How many numbers you want to add : \n");
    scanf("%d", &n);
    printf("Enter the elements that You want to add \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d,", &a[i]);
    }
    ans = sum(a, n);
    printf("The Sum Of %d elements is %d", n, ans);
}