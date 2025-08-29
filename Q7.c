#include<stdio.h>
int main ()
{
    float num1 , num2, num3 , sum , avarage;
    printf("Enter three values :");
    scanf("%f %f %f",&num1,&num2,&num3);
    sum = num1 + num2 + num3;
    avarage = sum/3;
    printf(" The sum is :%f\n ",sum);
    printf("The Avarage is :%f \n",avarage);
    return 0;

}