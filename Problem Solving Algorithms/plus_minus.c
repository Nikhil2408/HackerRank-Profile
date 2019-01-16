#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
 int N,i;
    int c=0,d=0,e=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
        {
        scanf("%d",&arr[i]);
    }
       
    for(i=0;i<N;i++)
    {
        if(arr[i]>0)
        {
            c++;
        }
        
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]<0)
        {
            d++;
        }
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]==0)
        {
            e++;
        }
    }
    printf("%f\n",(float)c/N);
    printf("%f\n",(float)d/N);
    printf("%f\n",(float)e/N);
    return 0;
}
