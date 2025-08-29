#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter the two number :\n");
    scanf("%d %d",&a,&b);
  int   add = a+b;
   int sub = a-b;
   int mul = a*b;
   float  div = a/b;

   
    printf("addtion :%d\n",add);
    printf("subtraction :%d\n",sub);
    printf("multiplication :%d\n",mul);
    printf("division :%f\n",div);

    return 0;

}