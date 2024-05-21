#include <stdio.h>
#include <string.h>
typedef struct student
{
    float percentage;
    int id;
    char name[30];
} std;
void records(std s[]);
void main()
{
    std s[50];
    records(s);
}
void records(std s[])
{
    int n;
    printf("Enter the number of student records : ");
    scanf("%d", &n);
    printf("Enter the Students Data Serial wise (Name, ID, Percent) :>\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d : \n", i + 1);
        scanf("%s", &s[i].name);
        scanf("%d", &s[i].id);
        scanf("%f", &s[i].percentage);
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("Student %d : \n", i + 1);
        printf("Name = %s \t", s[i].name);
        printf("ID = %d \t", s[i].id);
        printf("Percentage = %.2f \t", s[i].percentage);
        printf("\n");
    }
    FILE *fptr;
    fptr = fopen("Students Record.txt", "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(fptr, "Student %d : \n", i + 1);
        fprintf(fptr, "Name = %s \t", s[i].name);
        fprintf(fptr, "ID = %d \t", s[i].id);
        fprintf(fptr, "Percentage = %.2f \t", s[i].percentage);
        fprintf(fptr, "\n");
    }
    fclose(fptr);
    // s[0].percentage = 98.78;
    // s[0].id = 1230687005;
    // strcpy(s[0].name, "Amit");
    // s[1].percentage = 82.58;
    // s[1].id = 1230687007;
    // strcpy(s[1].name, "Jatin");
    // s[2].percentage = 88.62;
    // s[2].id = 1230687009;
    // strcpy(s[2].name, "Nakul");
    // s[3].percentage = 83.45;
    // s[3].id = 1230687014;
    // strcpy(s[3].name, "Mohan");
    // s[4].percentage = 90.13;
    // s[4].id = 1230687040;
    // strcpy(s[4].name, "Hardik");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Student %d : \n", i + 1);
    //     printf("Name = %s \t", s[i].name);
    //     printf("ID = %d \t", s[i].id);
    //     printf("Percentage = %.2f \t", s[i].percentage);
    //     printf("\n\n");
    // }
}