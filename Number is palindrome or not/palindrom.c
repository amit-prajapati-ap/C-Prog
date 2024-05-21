#include <stdio.h>
int palin(int n)
{
    int rev = 0, rem = 0, temp = 0;
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        temp = temp / 10;
        rev = (rev * 10) + rem;
    }
    if (rev == n)
    {
        return 1;
    }
    else if (rev != n)
    {
        return 0;
    }
}
void main()
{
    int num, out;
    printf("Enter  a Number to check that number is palindrome or not : \n");
    scanf("%d", &num);
    out = palin(num);
    if (out == 1)
    {
        printf("%d is a palindrome number", num);
    }
    else if (out == 0)
    {
        printf("%d is not a palindrome number", num);
    }
}