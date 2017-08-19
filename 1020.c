#include <stdio.h>

int main()
{
    int N,D,i,j,max_i;
    float sum,remain,max;
    float num[4][1000];
    scanf("%d %d",&N,&D);
    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < N;j++)
        {
            scanf("%f",&num[i][j]);
        }
    }
    for(i = 0;i < N;i++)
    {
        num[2][i] = num[1][i] / num[0][i];
        num[3][i] = 0;
    }
    sum = 0;
    remain = D;
    while(1)
    {
        max = 0;
        max_i = -1;
        for(i = 0;i < N;i++)
        {
            if(num[3][i] == 0 && max < num[2][i])
            {
                max = num[2][i];
                max_i = i;
            }
        }
        if(max_i == -1)
        {
            break;
        }
        if(remain <= num[0][max_i])
        {
            sum = sum + remain / (1.0 * num[0][max_i]) * num[1][max_i];
            break;
        }
        else
        {
            sum = sum + num[1][max_i];
            remain = remain - num[0][max_i];
            num[3][max_i] = 1;
        }
    }
    printf("%.2f\n",sum);
    return 0;
}