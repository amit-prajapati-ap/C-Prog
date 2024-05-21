#include<stdio.h>
void starpattern(int rows)
{
    for(int i=1; i<=rows; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void Reversestarpattern(int rows)
{
    for(int i=1; i<=rows; i++)
    {
        for(int j=0; j<rows-i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void main()
{
    int rows,type;
    printf("Enter 1 For Starpattern \nEnter 2 for Reversestarpattern");
    printf("\nType = ");
    scanf("%d",&type);
    
   /* if(type==1)
    {
        printf("You Choose Type 1");
        printf("\nEnter How many rows You want in starpattern = ");
        scanf("%d",&rows);
        starpattern(rows);
    }
    else
    {
        printf("You Choose Type 2");
        printf("\nEnter How many rows You want in starpattern = ");
        scanf("%d",&rows);
        Reversestarpattern(rows);
        }*/
        printf("Enter How many rows you want in any starpattern");
        scanf("%d",&rows);
        switch(type)
        {
            case 1:
            starpattern(rows);
            break;
            
            case 2:
            Reversestarpattern(rows);
            break;

            default:
            printf("You Choose Invalid Option");
        }

}