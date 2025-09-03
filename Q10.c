#include<stdio.h>
int main ()
{
    float area , length,width;
    printf("Enter the length & width :\n");
    scanf("%f %f",&length,&width);
    area = length*width;
    printf("the area & rectangle is : %f ",area);
    return 0;
}
