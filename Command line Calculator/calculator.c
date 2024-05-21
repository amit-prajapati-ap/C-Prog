#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(int argc, char const *argv[])
{
    char *operate;
    operate = argv[1];
    int n1 = atoi(argv[2]);
    int n2 = atoi(argv[3]);
    if (strcmp(operate, "sum") == 0)
    {
        printf("%d", n1 + n2);
    }
    else if (strcmp(operate, "sub") == 0)
    {
        printf("%d", n1 - n2);
    }
    else if (strcmp(operate, "multi") == 0)
    {
        printf("%d", n1 * n2);
    }
    else if (strcmp(operate, "div") == 0)
    {
        printf("%d", n1 / n2);
    }
}