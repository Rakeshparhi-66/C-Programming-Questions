#include<stdio.h>
#define pi 3.14159
int main(){
    float area, radius,cercumstance;
    printf("enter radius of the circle: ");
    scanf("%f",&radius);
    area = pi*radius*radius;
    cercumstance = 2*pi * radius;
    printf("Area of the circle is : %.2f\n",area);
    printf("Cercumstances of the circle is : %.2f",cercumstance);
    return 0;
}