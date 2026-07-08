#include<stdio.h>
int main()
{
int a,b,sum,sub,div,mult,remainder;
printf("Enter 1st number( keep the 1st number bigger ) :");
scanf("%d",&a);
printf("Enter 2nd number :");
scanf("%d",&b);
sum=a+b;
sub=a-b;
 div=a/b;
 mult=a*b;
 remainder=a%b;
printf("sum is =%d\n",sum);
printf("sub is =%d\n",sub);
printf("div is= %d\n",div);
printf("multiplication is=%d\n",mult);
printf("reaminder is =%d",remainder);
return 0;
}