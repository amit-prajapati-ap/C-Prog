#include<stdio.h>
void swap(int *ptr1, int *ptr2);
void main()
{
int n1,n2;
int *ptr1,*ptr2;
printf("Enter two numbers for swaping : \n");
scanf("%d%d",&n1,&n2);
ptr1 = &n1;
ptr2 = &n2;
printf("Before Swaping : \n Number1 = %d\n Number2 = %d\n",*ptr1,*ptr2);
swap(ptr1,ptr2);
printf("After Swaping : \n Number1 = %d\n Number2 = %d\n",*ptr1,*ptr2);
}
void swap(int *ptr1, int *ptr2)
{
    int temp = 0;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}