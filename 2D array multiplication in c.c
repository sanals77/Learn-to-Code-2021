//Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { int a[100][100],b[100][100],m,n,pdt[100][100];
    int p,q;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    scanf("%d%d",&p,&q);
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    }
    if (n==p)
    {
       for(int i=0;i<m;i++)    
       {    
          for(int j=0;j<q;j++)    
          {        
              pdt[i][j]=0;
              for(int k=0;k<p;k++)    
              {  
                  pdt[i][j]=pdt[i][j]+(a[i][k]*b[k][j]);    
              }    
          }    
       }   
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
                printf("%d ",pdt[i][j]);
            printf("\n");
        } 
    }
    else 
    printf("ERROR");

    
    return 0;
}
