#include <stdio.h>
#include <string.h>

int main()
{
    char A[1100],Q[1100];
    int B,R,i,j,length,sum;
    scanf("%s",A);
    scanf("%d",&B);
    length = strlen(A);
    sum = 0;
    j = 0;
    for(i = 0;i < length;i++)
    {
        sum = 10 * sum + A[i] - '0';
        if(i != 0 || sum >= B || length <= 1) 
        {
            Q[j++] = sum / B + '0';
        }
        sum = sum % B;
    }
    R = sum;
    Q[j] = '\0';
    printf("%s %d",Q,R);
    return 0;
}