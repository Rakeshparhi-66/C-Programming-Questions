// #include<stdio.h>

// int main() {
//     float principal, rate, time, simpleInterest;

//     // Taking input from user
//     printf("Enter Principal amount: ");
//     scanf("%f", &principal);

//     printf("Enter Rate of interest: ");
//     scanf("%f", &rate);

//     printf("Enter Time (in years): ");
//     scanf("%f", &time);

//     // Calculating Simple Interest
//     simpleInterest = (principal * rate * time) / 100;

//     // Displaying result
//     printf("Simple Interest = %.2f\n", simpleInterest);

//     return 0;
// }



#include<stdio.h>
int main ()
{
    float principal, rate , time , simpleinterest;
    printf("Enter Principal Amount :");
    scanf("%f",&principal);
    
    printf("Enter Tre rate of imterest :");
    scanf("%f",&rate);

    printf("Enter Time (in years) :");
    scanf("%f",&time);

    simpleinterest = principal * rate * time /100;

    printf(" Simple Interest =%.2f\n",simpleinterest);

     return 0;
     
}