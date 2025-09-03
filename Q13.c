#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the two nums A and B :");
    scanf("%d %d",&a,&b);
    c = a;
    a =b ;
    b =c;
    printf("After  swap value  : a=%d b=%d",a,b);
    
    return 0;

}