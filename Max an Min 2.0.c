//Write a C program to find the minimum and maximum element of an array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,i,max,min;
            scanf("%d",&n);
            int a[n];
            for(i=0;i<n;i++)
            {scanf("%d",&a[i]);
            }
            min=a[0];
            max=a[0];
            for(i=0;i<n;i++) 
            {if(min>a[i])
                min=a[i];
             if(max<a[i])
                 max=a[i];
            }
            printf("%d\n%d",min,max);
    return 0;
}
