//Write a C program to check whether a given number is amstrong or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 void amstrong(int n)
 { int a,num1,num2=0;
  a=n;
  while(n!=0)
  {num1=n%10;
   num2=num2+(num1*num1*num1);
   n=n/10;
  }  
  if(num2==a)
      printf("Amstrong");
  else
      printf("Not Amstrong");
 }  

int main()
{ int n;
  scanf("%d",&n);
  amstrong(n);

      
    return 0;
}
