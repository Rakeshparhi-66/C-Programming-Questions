#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number \n");
    scanf("%d",&a);
    a==0?printf("num is zero"):a >0  ? printf("Positive") :printf("Negative");

    // a >0  ? printf("Positive") :printf("Negative");
    return 0;

}