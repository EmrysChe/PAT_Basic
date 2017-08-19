#include<stdio.h>

#define N_MAX 100000

int main()
{
    char a[N_MAX][2];
    int N;
    int i;
    int a_win = 0;
    int a_eq = 0;
    int a_lose = 0;
    int b_win = 0;
    int b_eq = 0;
    int b_lose = 0;
    int a_j_flag = 0;
    int a_c_flag = 0;
    int a_b_flag = 0;
    int b_j_flag = 0;
    int b_c_flag = 0;
    int b_b_flag = 0;

    scanf("%d",&N);
    for(i = 0;i < N;i++)
    {
        scanf("\n%c %c",&a[i][0],&a[i][1]);
    }
    /*for(i = 0;i < N;i++)
    {
        printf("%c %c\n",a[i][0],a[i][1]);
    }*/
    for(i = 0;i < N;i++)
    {
        if(a[i][0] == 'C' && a[i][1] == 'J')
        {
            a_win = a_win + 1;
            b_lose = b_lose + 1;
            a_c_flag = a_c_flag + 1;
        }
        if(a[i][0] == 'C' && a[i][1] == 'B')
        {
            a_lose = a_lose + 1;
            b_win = b_win + 1;
            b_b_flag = b_b_flag + 1;
        }
        if(a[i][0] == 'C' && a[i][1] == 'C')
        {
            a_eq = a_eq + 1;
            b_eq = b_eq + 1;
        }
        if(a[i][0] == 'B' && a[i][1] == 'C')
        {
            a_win = a_win + 1;
            b_lose = b_lose + 1;
            a_b_flag = a_b_flag + 1;
        }
        if(a[i][0] == 'B' && a[i][1] == 'J')
        {
            a_lose = a_lose + 1;
            b_win = b_win + 1;
            b_j_flag = b_j_flag + 1;
        }
        if(a[i][0] == 'B' && a[i][1] == 'B')
        {
            a_eq = a_eq + 1;
            b_eq = b_eq + 1;
        }
        if(a[i][0] == 'J' && a[i][1] == 'B')
        {
            a_win = a_win + 1;
            b_lose = b_lose + 1;
            a_j_flag = a_j_flag + 1;
        }
        if(a[i][0] == 'J' && a[i][1] == 'C')
        {
            a_lose = a_lose + 1;
            b_win = b_win + 1;
            b_c_flag = b_c_flag + 1;
        }
        if(a[i][0] == 'J' && a[i][1] == 'J')
        {
            a_eq = a_eq + 1;
            b_eq = b_eq + 1;
        }
    }

    printf("%d %d %d\n",a_win,a_eq,a_lose);
    printf("%d %d %d\n",b_win,b_eq,b_lose);

    if((a_b_flag >= a_c_flag) && (a_b_flag >= a_j_flag))
    {
        printf("B ");
    }
    if((a_c_flag > a_b_flag) && (a_c_flag >= a_j_flag))
    {
        printf("C ");
    }
    if((a_j_flag > a_b_flag) && (a_j_flag > a_c_flag))
    {
        printf("J ");
    }
    if((b_b_flag >= b_c_flag) && (b_b_flag >= b_j_flag))
    {
        printf("B\n");
    }
    if((b_c_flag > b_b_flag) && (b_c_flag >= b_j_flag))
    {
        printf("C\n");
    }
    if((b_j_flag > b_b_flag) && (b_j_flag > b_c_flag))
    {
        printf("J\n");
    }
    
    return 0;
}