#include <stdio.h>
void main()
{
    int rows, type;
    printf("Enter 1 For Starpattern \nEnter 2 for Reversestarpattern");
    printf("\nType = ");
    scanf("%d", &type);

        switch (type)
    {
    case 1:
        printf("Enter How many rows you want in starpattern : ");
        scanf("%d", &rows);
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 2:
        printf("Enter How many rows you want in Reverse starpattern : ");
        scanf("%d", &rows);
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 0; j < rows - i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    default:
        printf("You Choose Invalid Option");
    }
}