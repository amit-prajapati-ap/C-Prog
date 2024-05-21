#include <stdio.h>
#include <string.h>
void read(char str[]);
void main()
{
    char str[100];
    printf("Enter string : \n");
    gets(str);
    strlwr(str);
    read(str);
}
void read(char str[])
{
    int countv = 0, countc = 0, countd = 0, countb = 0, counta = 0, counts = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'o' || str[i] == 'e' || str[i] == 'u')
        {
            countv++;
            counta++;
        }
        else if (str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9' || str[i] == '0')
        {
            countd++;
        }
        else if (str[i] == ' ')
        {
            countb++;
        }
        else if (str[i] == '*' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '!' || str[i] == '~' || str[i] == '?')
        {
            counts++;
        }

        else
        {
            countc++;
            counta++;
        }
    }
    printf("Number of Alphabets = %d\nNumber of Consonents = %d\nNumber of Vowels = %d\nNumber of Digits = %d\nNumber of Spaces = %d\nNumber of Special Character = %d", counta, countc, countv, countd, countb, counts);
}