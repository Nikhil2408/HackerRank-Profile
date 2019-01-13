#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
     long int N,i,sum=0;
    scanf("%ld",&N);
   long int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        sum=sum+arr[i];
    }
    printf("%ld",sum);
    return 0;
}
