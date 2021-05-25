//Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { char a[100],c;
            int counter=0;
            gets(a);
            scanf("%c",&c);
            for(int i=0;a[i]!='\0';i++)
            {if(c==a[i])
             counter++;
            }
            printf("%d",counter);

    
    return 0;
}
