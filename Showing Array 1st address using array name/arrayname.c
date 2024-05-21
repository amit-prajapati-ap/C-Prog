#include<stdio.h>
void main()
{
    int a[5] = {34,56,12,23,44};
    printf("Address using array name = %u",a);
    printf("\n Address using array element position = %u",&a[0]);
}