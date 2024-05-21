#include<stdio.h>
void main()
{
    int a[20],i,n,src,loc,flag;
    flag=0;
    printf("Enter the Number of elements in the array: \n");
    scanf("%d",&n);
    printf("Enter the elements that present in the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the searching element that you want to be searched: \n");
    scanf("%d",&src);
    for(i=0; i<n; i++)
    {
        if(a[i]==src)
        {
            flag=1;
            loc=i+1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element Does not exist");
    }
    else
    {
        printf("Element are found at location %d",loc);
    }
}