#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,x,y;
printf("Enter the values of a and b and c");
scanf("%f %f %f", &a, &b, &c);
d=(b*b)-(4*a*c);
x=((-b) + sqrt(d))/2*a;
y=((-b) - sqrt(d))/2*a;
printf(" root no 1 :%.2f\n",x);
printf("root no 2 :%.2f\n",y);
return 0;
}