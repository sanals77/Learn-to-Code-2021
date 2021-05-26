//Write a C Program to read a 2D Array and then display it.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int m,n,i,j;
            scanf("%d %d\n",&m,&n);
            int a[m][n];
            for(i=0;i<m;i++)
            {for(j=0;j<n;j++)
                {scanf("%d",&a[i][j]);}}
             for(i=0;i<m;i++)
             { for(j=0;j<n;j++)
                {printf("%d ",a[i][j]);}
               printf("\n");}
            
            
              
  
    return 0;
}
