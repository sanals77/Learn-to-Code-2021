//Write a C program to find the factorial of a given number using a recursive function

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n)
{int a;
    if(n==0)
        a=1;
    else
        a=n*factorial(n-1);
return a;
}


int main() 
{int n;
    scanf("%d",&n);
   if(n<0)
       printf("ERROR");
   else
       printf("%d",factorial(n));
    

    
    return 0;
}
