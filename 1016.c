#include<stdio.h>

int main()
{
    long int A,B,Da,Db,count;
    long int Pa = 0,Pb = 0;
    int i;
    scanf("%ld %ld %ld %ld",&A,&Da,&B,&Db);
    for(i = 10;A / i >= 1;A = A / i)
    {
        if(A % i == Da)
        {
            Pa = Pa * 10 + Da;
        }
    }
    if(A % i == Da)
    {
        Pa = Pa * 10 + Da;
    }
    for(i = 10;B / i >= 1;B = B / i)
    {
        if(B % i == Db)
        {
            Pb = Pb * 10 + Db;
        }
    }
    if(B % i == Db)
    {
        Pb = Pb * 10 + Db;
    }
    count = Pa + Pb;
    printf("%ld\n",count);
}