// Develop a program to check if a number is a palindrome

#include<stdio.h>
int main()
{
    int num,reverse = 0,original,digit;
    printf("Enter the number :");
    scanf("%d",&num);
    original =num;
    while (num > 0)
    {
        digit =num % 10;
        reverse = reverse * 10 + digit;
        num = num /10;
    }
    if (original == reverse) 
    
       printf("The number is palindrome :\n");

    else
        printf("The number is not palindrome :\n");
    
    
    
    return 0;
}