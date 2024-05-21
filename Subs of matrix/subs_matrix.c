#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], c[50][50], ra, rb, ca, cb, k;
    printf("Enter number of Row & Column in first matrices : \n");
    scanf("%d%d", &ra, &ca);
    printf("Enter number of Row & Column in second matrices : \n");
    scanf("%d%d", &rb, &cb);
    printf("Enter Elements Of first matrices: \n");
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Elements Of second matrices: \n");
    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("After subs Of Two Matrix \n");
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < rb; j++)
        {
            c[i][j] = 0;
            c[i][j] = a[i][j] - b[i][j];
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
}