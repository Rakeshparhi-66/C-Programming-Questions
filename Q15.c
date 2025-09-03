#include<stdio.h>
#include<math.h>
int main()
{
    int a,square;
    printf("Enter the square value ");
    scanf("%d",&a);
    square = pow(a,2);//square = a*a;
    printf("The square of %d is %d",a,square);
    return 0;
}