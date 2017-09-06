#include<stdio.h>  
#include<math.h>   
  
int main()  
{  
    int N;  
    char c;  
    scanf("%d %c",&N,&c);  
    int k = sqrt((N + 1) / 2);  
    for(int i = 1;i <= k;i++)  
    {   
        for(int j = 1;j < i;j++)  
        {  
            printf(" ");  
        }  
        for(int j = 2*(k - i) + 1;j >= 1;j--)  
        {  
            printf("%c",c);  
        }  
        printf("\n");  
    }  
    for(int i = 1;i <= k - 1;i++)  
    {  
        for (int j = 1;j <= k - i - 1;j++)  
        {  
            printf(" "); 
        }  
        for(int j = 1;j <= 2 * i + 1;j++)  
        {  
            printf("%c",c);  
        }  
        printf("\n");  
    }  
    printf("%d\n",N + 1 - 2 * k * k);
    return 0;  
}