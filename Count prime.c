//Write a C program to find the number of prime numbers in a array of integers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primen(int b)
{int a,i,c1=0;
 for(i=2;i<b;i++)
 {if(b%i==0)
     c1++;
 }
 {if (c1==0)
     a=1;
 else 
     a=0;
 }
 return a;
}

int main() 
{int i,n,c2=0;
 scanf("%d\n",&n);
 int a[n];
 for(i=0;i<n;i++)
 {  scanf("%d",&a[i]);
 }
  for(i=0;i<n;i++)
  { if(primen(a[i])==1)
         c2++; 
  }
 printf("%d",c2);
    return 0;
}
