//Write a C program to find the second maximum element in an array of integer elements
//use this method or bubblesort and print second largest

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{int n,i,small=0,large=0;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {scanf("%d ",&a[i]);
 }
if(a[0]>a[1])
{ large=a[0];
     small=a[1];}
  else if(a[0]<a[1])
  {   large=a[1];
     small=a[0];
  }
  for(i=2;i<n;i++)
  { if(large<a[i])
     { small=large;
         large=a[i];}
     else if(small<a[i] && a[i]!=large)
         small=a[i];
 }

   printf("%d",small);
    return 0;
}
