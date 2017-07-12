#include<stdio.h>
//题目要求是M<=N<=10000而不是10000以内的素数，最大的素数为104729，而不是9973
int main()
{
    int M,N;
    int i,j;
    int k = 0;
    int flag = 0;
    int line = 0;
    scanf("%d",&M);
    scanf("%d",&N);
    for(i = 1;k <= 10000;i++)
    {
        for(j = 1;j * j <= i;j++)
        {
            if(((i % j) == 0) && (j != 1))
                flag = 1;
        }
        if((flag == 0) && (i != 1))
        {
            ++k;
            if((k >= M)&&(k < N))
            {
                line++;
                if(line == 10)
                {
                    printf("%d\n",i);
                    line = 0;
                }
                else
                    printf("%d ",i);
            }
            if(k == N)
            {
                printf("%d",i);
            }
        }
        else
            flag = 0;
    }
    return 0;
}