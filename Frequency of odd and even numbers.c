//Write a C program to find the frequency of odd and even numbers in the 1D array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,i,e=0,o=0;
            scanf("%d\n",&n);
            int arr[n];
            for(i=0;i<n;i++)
            { scanf("%d\n", &arr[i]);}
            for(i=0;i<n;i++)
            {if(arr[i]%2==0)
                    e++;
                else 
                    o++;}
            printf("%d\n",e);
            printf("%d\n",o);
                
            
            

     
    return 0;
}
