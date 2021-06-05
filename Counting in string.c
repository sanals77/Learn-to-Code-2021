//Write a C program to count and display the number of Vowels, Consonants and spaces in a string

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{int i,v=0,c=0,s=0;
 char a[200];
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
      v++;
  else if(a[i]==' ')
      s++;
  else
      c++;
}
 printf("%d\n%d\n%d",v,c,s);

  
}
