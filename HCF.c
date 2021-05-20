//C program to print the HCF of two numbers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { int a,b,i,gcd;
            scanf("%d %d\n", &a,&b);
            for(i=1;i<=a && i<=b;i++)
            {if(a%i==0 && b%i==0)
             gcd=i;}
            printf("%d", gcd);
            

     
    return 0;
}
