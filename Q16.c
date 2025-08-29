#include<stdio.h>
int main ()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if (a>0){

        printf("the num is positive");
    }
    else if (a<0)
    {
        printf("the num is negative");
    }
    else
    {
        printf("the num is zero");
    }
    return 0;
}