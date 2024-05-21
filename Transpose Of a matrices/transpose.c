#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], m, n;
    printf("Enter The Size of a matrices : \n");
    scanf("%d%d", &m, &n);
    printf("Enter The Elements of matrices %d*%d \n", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = a[j][i];
            printf("%d   ", b[i][j]);
        }
        printf("\n");
    }
}