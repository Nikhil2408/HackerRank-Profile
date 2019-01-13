#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
int main()
    {
    int n;
    scanf("%d",&n);
    int N[n],i,sum;
    for(i=0;i<n;i++)
    scanf("%d",&N[i]);
    for(i=0;i<n;i++)
        {
        
       sum=sum+N[i];
    }
        printf("%d",sum);  
}