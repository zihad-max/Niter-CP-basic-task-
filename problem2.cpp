#include<stdio.h>
int main()
{
int a,b,c,d,e,total;
float avg,percentage;
printf("Enter the subject a mark: ");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
total=a+b+c+d+e;
avg=total/5.0;
percentage=(total/500.0)*100;
printf("total is =%d\n",total);
printf("avg is=%.2f\n",avg);
printf(" percentage is =%.2f%%\n",percentage);
return 0;
}