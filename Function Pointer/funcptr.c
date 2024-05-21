#include <stdio.h>
int ave(int a, int b)
{
    int s, temp;
    temp = a + b;
    s = temp / 2;
    return s;
}
void sayGE(int a, int b, int (*ptr)(int, int))
{
    printf("Hello user Good Evening\n");
    printf("Average of %d and %d : %d\n", a, b, ptr(a, b));
}
void sayGN(int a, int b, int (*ptr)(int, int))
{
    printf("Hello user Good Night\n");
    printf("Average of %d and %d : %d\n", a, b, ptr(a, b));
}
void main()
{
    int (*ptr)(int, int), n1, n2;
    printf("Enter Total number for finding Average\n");
    scanf("%d%d", &n1, &n2);
    ave(n1, n2);
    ptr = &ave;
    sayGE(n1, n2, ptr);
    sayGN(n1,n2,ptr);
}