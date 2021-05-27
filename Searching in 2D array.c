//Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int m,n,i,j,num,count=0;
            scanf("%d %d\n",&m,&n);
            int a[m][n];
            for(i=0;i<m;i++)
            {for(j=0;j<n;j++)
                    scanf("%d ",&a[i][j]);}
            scanf("\n %d",&num);
            for(i=0;i<m;i++)
            { for(j=0;j<n;j++)
                if(a[i][j]==num)
                { count=1;
                 printf("Element found at (%d,%d)\n",i,j);
                }}
                   if(count!=1) 
                        printf("Element not found");
            
            

      
    return 0;
}
