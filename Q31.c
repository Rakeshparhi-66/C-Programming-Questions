//  Implement a program to calculate the sum of digits of a number

#include<stdio.h>
int main ()
{
    int sum =0,num;
    printf("Enter a number :");
    scanf("%d",&num);
    while (num>0)
    {
        sum+=num % 10;
        num = num / 10;
    }
    printf("Sum of difits = %d", sum);
    return 0;
}