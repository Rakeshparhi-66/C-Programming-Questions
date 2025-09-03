// Develop a program to check whether a year is a leap year. 

#include<stdio.h>
int main ()
{
    int year;
    printf("Enter a Year :");
    scanf("%d",&year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
      printf("%d is a leap year",year);
    }
     else
     {
        printf("This is not a leap year\n");
     }
    
    return 0;
}