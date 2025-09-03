#include<stdio.h>
int main()
{
    float km,mile ;
    printf("Enter the KM :");
    scanf("%f",&km);
    mile = km*0.621;
    printf("%.2f km is %.3f mile ",km,mile);

    return 0;
}