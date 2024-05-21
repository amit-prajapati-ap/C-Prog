
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