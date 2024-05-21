#include <stdio.h>
int lenstring(char str[])
{
    int count = 0, i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            count++;
        }
        i++;
    }
    return count;
}
void main()
{
    char str[100];
    int length;
    printf("Enter a String: \n");
    gets(str);
    length = lenstring(str);
    printf("The Length Of String : %d", length);
}