#include <stdio.h>
void main()
{
    int a[5] = {23, 45, 66, 12, 98}, temp;
    for (int i = 0; i < 5; i++)
    {
        temp = i + 1;
        printf("%d Element : %d\n", temp, *(a + i));
    }
}