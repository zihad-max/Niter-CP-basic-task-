#include<stdio.h>
int main()
{
float celcius,fahrenheit;
printf("Enter fahrenheit temperature :");
scanf("%f",&fahrenheit);
celcius=((fahrenheit-32)*5)/9;
printf(" celcius temperature is=%.2f",celcius );
return 0;
}