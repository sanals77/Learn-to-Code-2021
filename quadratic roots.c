//Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { int a,b,c,d; float ri;
           
        scanf("%d %d %d",&a,&b,&c);
            d=(b*b)-(4*a*c);
            if(d<0)
            { ri=sqrt(-d)/((float)2*a);
                printf("Complex: %.2f + i%.2f , %.2f - i%.2f",-b/((float)2*a),ri,-b/((float)2*a),ri);}
            else if(d>0)
                printf("Distinct Real : %.2f , %.2f ",(-b+sqrt(d))/((float)2*a),(-b-sqrt(d))/((float)2*a));
            else
                printf("Equal Real: %.2f , %.2f ",-b/(float)2*a,-b/(float)2*a);
                


    return 0;
}
