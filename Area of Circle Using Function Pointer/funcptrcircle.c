#include<stdio.h>
#include<math.h>
float Edistance(int x1,int x2,int y1,int y2)
{
    int a;
    a = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    return sqrt(a);
}
float areaofcircle(int x1,int x2,int y1,int y2,float (*distance)(int x1,int x2,int y1,int y2))
{
    return distance(x1,x2,y1,y2);
}
void main()
{
int x1,x2,y1,y2;
float dst;
printf("Enter x1\n");
scanf("%d",&x1);
printf("Enter x2\n");
scanf("%d",&y1);
printf("Enter y1\n");
scanf("%d",&x2);
printf("Enter y2\n");
scanf("%d",&y2);
dst = areaofcircle(x1,x2,y1,y2,Edistance);
printf("The Distance is %.2f",dst);
}