//Write a C program to find the number of words in a string. Also reverse string.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void count(char a[1000]) 
{
 int count=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' '&&a[i+1]!=' ')
        {
            count++;
        }
    }
    printf("no of words = %d\n",count+1);
}


void reverse(char a[1000])
{int i;
 
 {for(i=strlen(a)-1;i>=0;i--)
     printf("%c",a[i]);
 }
}

int main() 
{ char a[1000];
 gets(a);
 count(a);
 reverse(a);

        
    return 0;
}
