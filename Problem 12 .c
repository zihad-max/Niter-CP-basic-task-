#include<stdio.h>
int main()
{
int second, minute, hour, remains1 ,remains2;
printf("Enter the number of seconds: ");
scanf("%d",&second);
minute=second/60;
remains1=second%60;
hour=minute/60;
remains2=minute%60;
printf("number of minute=%d\n",minute);
printf("seconds remains after calculating minute=%d\n",remains1);
printf("number of hour=%d\n",hour);
printf("minute remains after calculating hour=%d",remains2);
return 0;
}