#include <stdio.h>
#include <string.h>
void main()
{
    typedef struct travel_agency
    {
        char name[50];
        char id[20];
        char route[50];
        int kms;
    } sta;
    int n;
    int choice;
    printf("Enter How Many Drivers Details You Want: ");
    scanf("%d", &n);
    sta d[n];
    printf("\nWelcome To Prajapati Moters\n");
    printf("Enter 1 If You fill details : ");
    scanf("%d", &choice);
    for (int i = 1; i <= n; i++)
    {
        if (choice == 1)
        {
            printf("\nEnter Driver %d Name: ", i);
            scanf("%s", &d[i].name);
            printf("\nEnter Driver %d ID : ", i);
            scanf("%s", &d[i].id);
            printf("\nEnter Driver %d route : ", i);
            scanf("%s", &d[i].route);
            printf("\nEnter Driver %d Distance in KMS : ", i);
            scanf("%d", &d[i].kms);
        }
        else
        {
            break;
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        if (choice == 1)
        {
            printf("Driver %d Information\n", i);
            printf("\nName = %s", d[i].name);
            printf("\nID = %s", d[i].id);
            printf("\nRoute = %s", d[i].route);
            printf("\nDistance = %d KMs", d[i].kms);
            printf("\n\n");
        }
        else
        {
            break;
        }
    }
}