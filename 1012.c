#include<stdio.h>

int main()
{
    int A1 = 0,A2 = 0,A3 = 0,A5 = 0;
    float A4 = 0;
    int count = 0;
    int a[1000];
    int i,N = 0;
    int flag = 1;
    int flag1 = 0;
    scanf("%d",&N);
    for(i = 0;i < N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < N;i++)
    {
        if((a[i] % 5 == 0) && (a[i] % 2 == 0))
            A1 += a[i];
        if(a[i] % 5 == 1)
        {
            flag1 = 1;
            A2 += (a[i] * flag);
            flag = flag*(-1);
        }
        if(a[i] % 5 == 2)
            A3++;
        if(a[i] % 5 == 3)
        {
            A4 += a[i];
            count++;
        }
        if(a[i] % 5 == 4)
        {
            if(a[i] > A5)
                A5 = a[i];
        }
    }
    if(A1 == 0)
        printf("N ");
    else
        printf("%d ",A1);
    if(flag1 == 0)
    //交错求和时有可能A2=0，但这种情况下符合条件的数字是存在的，所以输出应该是0而不是N，故需要一个标志位表示是否存在此类数
        printf("N ");
    else
        printf("%d ",A2);
    if(A3 == 0)
        printf("N ");
    else
        printf("%d ",A3);
    if(A4 == 0)
        printf("N ");
    else
        printf("%.1lf ",A4 / count);
    if(A5 == 0)
        printf("N");
    else
        printf("%d",A5);
    return 0;
}