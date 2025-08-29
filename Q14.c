// #include <stdio.h>

// int main() {
//     int attendance = 85;   // in percentage
//     int internalMarks = 40;
//     int isBlacklisted = 0; // 0 = false, 1 = true

//     // Check using AND (&&)
//     if (attendance >= 75 && internalMarks >= 35) {
//         printf("AND: Eligible because attendance >=75 AND internal marks >=35\n");
//     }

//     // Check using OR (||)
//     if (attendance >= 75 || internalMarks >= 35) {
//         printf("OR: Allowed because either attendance >=75 OR internal marks >=35\n");
//     }

//     // Check using NOT (!)
//     if (!isBlacklisted) {
//         printf("NOT: You are NOT blacklisted, so you can appear for the exam\n");
//     }

//     return 0;
// }
#include<stdio.h>
int main()
{
    int age;
    int  internalmark,percentage;
    int blacklistd;

    printf("Enter your age :");
    scanf("%d",&age);

    printf("Enter your internalmark or percentage : \n :");
    scanf("%d %d",&internalmark,&percentage);

    printf("To check Blacklisted or not :");
     scanf("%d",&blacklistd);
  
    if (age>=18 && age <=60)
    {
       printf("Your age is within the valid limit \n"); 
    }
    else 
     {
        printf("Your age outside of the valid limit  \n");
    }
    if (percentage>=75 || internalmark>=30)
     {
        printf("You are allwed  for Examination \n");
    }
    else
    {
        printf("you are not allwed for examination \n");
    }
    if(!blacklistd) 
     {
        printf("You are blacklisted\n");
    }
    else
    {
        printf("You are not blacklisted\n");
    }
    return 0;
    
    
}