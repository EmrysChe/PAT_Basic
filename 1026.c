#include<stdio.h>

#define MY_CLK_TCK 100

int main()
{
    int C1,C2;
    int Ctime;
    int hh = 0;
    int mm = 0;
    int ss = 0;
    scanf("%d%d",&C1,&C2);
    Ctime = (C2 - C1) / MY_CLK_TCK;
    if(((C2 - C1) % MY_CLK_TCK) >= 50)
    {
        Ctime = Ctime + 1;
    }
    hh = Ctime / 3600;
    mm = (Ctime % 3600) / 60;
    ss = Ctime % 60;
    printf("%02d:%02d:%02d\n",hh,mm,ss);
    return 0;
}