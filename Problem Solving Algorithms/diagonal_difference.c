#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int N,i,j,sum1=0,sum2=0,diff;
    scanf("%d",&N);
    int mat[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==j)
                sum1=sum1+mat[i][j];
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
           if(i+j==N-1)
               sum2=sum2+mat[i][j];
        }
    }
    diff=abs(sum1-sum2);
    printf("%d",diff);
    
    return 0;
}
