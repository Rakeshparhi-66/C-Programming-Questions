#include<stdio.h>
int main ()
{
    int num1,num2 ,num3,largest_num2,largest_num3;
    printf("Enter three numbers :");
    scanf("%d %d %d",&num1,&num2,&num3);
    largest_num2 = (num1>num2) ? num1 : num2;
    largest_num3 = (largest_num2>num3)? largest_num2 : num3;
    printf(" The largest number is  : %d",largest_num3);
    return 0;
}