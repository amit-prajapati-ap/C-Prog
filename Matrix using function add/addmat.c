#include <stdio.h>
void sum(int matrix1[][2], int matrix2[][2], int r1, int c1, int r2, int c2);
void main()
{
    int matrix1[20][20], matrix2[20][20], r1, r2, c1, c2;
    printf("Enter Number of rows & coloumns in first matrix : \n");
    scanf("%d%d", &r1, &c1);
    printf("Enter Number of rows & coloumns in second matrix : \n");
    scanf("%d%d", &r2, &c2);
    if (r1 != c2 || c1 != r2)
    {
        printf("MATRIX ADDITION NOT POSSIBLE");
    }
    else
    {
        sum(matrix1, matrix2, r1, c1, r2, c2);
    }
}
void sum(int matrix1[][2], int matrix2[][2], int r1, int c1, int r2, int c2)
{
    int temp[20][20];
    printf("Enter the elements in first matrix : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter Elements Of second matrices: \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            temp[i][j] = 0;
            temp[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("-----Sum of %d by %d matrix-----\n", r1, c2);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", temp[i][j]);
        }
        printf("\n");
    }
}