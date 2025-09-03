#include<stdio.h>
#include<math.h>
int main ()
{
    float principal , rate , time, amount, compoundinterest ;

    printf("Enter Principal amount :");
    scanf("%f",&principal);

    printf("Enter Rate of Interest :");
    scanf("%f",&rate);

    printf("Enter Time (in year) :");
    scanf("%f",&time);
    
   amount = principal* pow((1+ rate/100),time);
   compoundinterest = amount - principal;
   
   printf("Compaund interest is =%.2f\n",compoundinterest);
   printf("Total amount = %.2f\n",amount);

    return 0;
}