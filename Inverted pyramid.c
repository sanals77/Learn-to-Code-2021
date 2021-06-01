//Write a C program to print inverted full pyramid of *

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int i,j,a,k;
    scanf("%d",&a);

    if(a>0)
    {    for(i=1;i<=a;i++)
    {   for(j=1; j<i; j++)
        {
            printf("  ");
        }
        for(k=1;k<=(a*2-((2*i)-1)); k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    }
    else
        printf("ERROR");

  
    return 0;
}
