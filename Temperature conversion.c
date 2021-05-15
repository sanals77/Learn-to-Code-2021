Write a C Program to convert Fahrenheit to Celsius.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {float f,c;
            scanf("%f\n",&f);
            c = (f-32)*5/9;
            printf("%.2f\n",c);

      
    return 0;
}
