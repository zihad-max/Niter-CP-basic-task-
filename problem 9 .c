#include<stdio.h>
int main()
{
int a,b;
float area;
printf("Enter the height of the triangle a :");
scanf("%d",&a);
printf(" Enter the base of the triangle b:");
scanf("%d",&b);
area=a*b*0.5;
printf("area is= %.2f",area);
return 0;
}