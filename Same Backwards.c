//Write a C Program to identify if a number is a palindrome or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { int a,b,rem,c=0;
    scanf("%d",&a);
            b=a;
            while(b!=0)
            { rem=b%10;
                c=c*10+rem;
                b=b/10;     }
            if(c==a)
            printf("Yes");
            else
                printf("No");
                
            
    return 0;
}
