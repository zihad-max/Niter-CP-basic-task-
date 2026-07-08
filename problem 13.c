#include<stdio.h>
int main()
{
float celcius,fahrenheit;
printf("Enter celcius temperature :");
scanf("%f",&celcius);
fahrenheit=(9*celcius)/5+32;
printf(" fahrenheit temperature is=%f",fahrenheit );
return 0;
}