//Write a C program to print the above series starting from 0 and the upperlimit is determined by the user

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int a,b,n,i,sum;
            a=0;
            b=1;
            scanf("%d ",&n);
            for(i=1;i<=n;i++)
            {printf("%d ",a);
                sum=a+b;
                a=b;
                b=sum;}

       
    return 0;
}
