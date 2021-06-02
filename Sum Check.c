//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void revprime (int a,int b)
{
    int sum,c,i;
    int rev=0,n=1,d;
    rev=0;
    sum=a+b;
    if(sum%2==0)
    {
        d=sum;
        while(sum!= 0)
    {
        c = sum%10;
        rev = rev*10 + c;
        sum /= 10;
    }
        printf("%d\n%d",d,rev);
    }
    else
        { 
            for(i=2;i<sum;i++)
            {
                if(sum%i==0)
                {
                    
                    n++;
                }
                
                
            }
            if(n==1)
            {
                 printf("%d\nPrime",sum);
            }
        else 
        {
           printf("%d\nNot prime",sum);
        }
            
        }
    
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    revprime(a,b);
    return 0;

    
 
}
