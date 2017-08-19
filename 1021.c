#include<stdio.h>

#define MAX 1001

int main()
{
    char N[MAX];
    int i,j;
    int a[10];
    for(i = 0;i < 10;i++)
    {
        a[i] = 0;
    }
    scanf("%s",N);
    for(i = 0;N[i] != '\0';i++)
    {
        for(j = 0;j < 10;j++)
        {
            if(N[i] - '0' == j)
            {
                a[j] += 1;
            }
        }
    }
    for(i = 0;i < 10;i++)
    {
        if(a[i] == 0)
            continue;
        else
            printf("%d:%d\n",i,a[i]);
    }
    return 0;
}