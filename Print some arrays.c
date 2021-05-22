//Write a C program to read n values from the user and store it in the array. Reprint the values stored in the array and also print the value of second element in the array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,i,j;
            scanf("%d\n",&n);
            int arr[n];
            for(i=0;i<n;i++)
            {scanf("%d\n",&arr[i]);}
            printf("Entered array: ");
            for(j=0;j<n;j++)
            {printf("%d ",arr[j]);}
            printf("\n%d ",arr[1]);
            

    
    return 0;
}
