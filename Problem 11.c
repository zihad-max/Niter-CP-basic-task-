#include<stdio.h>
int main()
{
int day, month, year, remains1 ,remains2;
printf("Enter the number of day: ");
scanf("%d",&day);
month=day/30;
remains1=day%30;
year=month/12;
remains2=month%12;
printf("number of month=%d\n",month);
printf("days remains after calculating month=%d\n",remains1);
printf("number of year=%d\n",year);
printf("months remains after calculating year=%d",remains2);
return 0;
}