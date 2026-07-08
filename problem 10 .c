#include<stdio.h>
int main()
{
float cm, meter, kilometer;
printf("Enter the centimeter value :");
scanf("%f",&cm);
meter=cm/100.0;
kilometer=meter/1000.0;
printf("meter value is=%.2fm\n",meter);
printf("kilometer value is=%.2fkm",kilometer);
return 0;
}