// Write a program to demonstrate the use of the modulus operator

// #include<stdio.h>
// int main()
// {
//     int num1,num2;
//     printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);

//     printf("\nUsing Modulus Operator:\n");
//     printf("%d %% %d = %d\n", num1, num2, num1 % num2);

//     return 0;
// }



#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);
    printf("\nUsing modulus operator :");
    printf("%d %% %d= %d\n",num1,num2, num1 % num2);
    return 0;
}