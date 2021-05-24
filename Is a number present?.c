//Write a C program to check whether a number present in the 1D array or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,i,num,checker=0;
            scanf("%d\n",&n);
            int arr[n];
            for(i=0;i<n;i++)
            {scanf("%d\n",&arr[i]);}
            scanf("%d/n",&num);
            for(i=0;i<n;i++)
            {if(num==arr[i])
                    checker++;}
            if(checker==0)
                printf("%d is not present in this array",num);
            else
                printf("%d is present in this array",num);
                
            
            

   
    return 0;
}
