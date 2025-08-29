#include<stdio.h>
int main ()
{
    float celcius, farenheight;
    printf("Enter the tempreture of celcius : ");
    scanf("%f",&celcius);
    farenheight = (9.0/5.0*celcius)+32;
    printf("Fahrenheit value is : %f",farenheight);
    return 0;
}