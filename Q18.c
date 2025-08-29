#include<stdio.h>
int main()
{
    int a,case1,case2;
    printf("Enter the number \n");
    scanf("%d",&a);
    case1 = a==0?printf("num is zero"):a >0  ? printf("Positive") :printf("Negative");

    // a >0  ? printf("Positive") :printf("Negative");
    return 0;

}