//Write a C Program to perform all four basic Mathematical Operations on two numbers taken from user input.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int a,b,c,d,e ; float f;
            scanf("%d", &a);
            scanf("%d", &b);
            c=a+b;
            d=a-b;
            e=a*b;
            f=a/(float)b;
            printf("%d\n",c);
            printf("%d\n",d);
            printf("%d\n",e);
            printf("%.2f\n",f);
    return 0;
}
