#include<stdio.h>

int Kaprekar(int N)
{
    int i,j,temp,x,y;
    int a[4];
    a[0] = N / 1000;
    a[1] = (N % 1000) / 100;
    a[2] = (N % 100) / 10;
    a[3] = N % 10;
    for(i = 0;i < 4;i++)
    {
        for(j = 0;j < 4 - i;j++)
        {
            if(a[i] < a[i + j])
            {
                temp = a[i];
                a[i] = a[i + j];
                a[i + j] = temp;
            }
        }
    }
    x = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    y = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
    //printf("%.4d",N);
    printf("%.4d - %.4d = %.4d\n",x,y,x - y);
    return x - y;
}

int main()
{
    int N;
    scanf("%d",&N);
    
    while(1)
    {
        N = Kaprekar(N);
        if(N == 6174)
            break;
        if(N == 0)
            break;
    }

    return 0;
}