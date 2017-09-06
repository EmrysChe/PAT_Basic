#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[10000];
    char new_behind[10000];
    char *behind;
    char *after;
    char tmp;
    //double f;
    int a,i,flag,b;
    scanf("%s",str);
    behind = strtok(str,"E");
    after = strtok(NULL,"E");
    a = strlen(behind);
    //f = atof(behind);
    if(after[0] == '+')
    {
        for(i = 0;i < a;i++)
        {
            if(behind[i] == '.')
            {
                flag = i;
                new_behind[i] = behind[i];
            }
            else
            {
                new_behind[i] = behind[i];
            }
        }
        new_behind[i] = '\0';
        //printf("%s\n%d\n",new_behind,flag);
        for(i = flag;i < flag + atoi(after);i++)
        {
            if(new_behind[i] == '.')
            {
                if(new_behind[i + 1] == '\0')
                {
                    tmp = new_behind[i];
                    new_behind[i] = '0';
                    new_behind[i + 1] = tmp;
                    new_behind[i + 2] = '\0';
                }
                else
                {
                    tmp = new_behind[i];
                    new_behind[i] = new_behind[i + 1];
                    new_behind[i + 1] = tmp;
                }
            }
        }
        if(new_behind[strlen(new_behind) - 1] == '.')
        new_behind[strlen(new_behind) - 1] = '\0';
        for(i = 0;i < strlen(new_behind);i++)
        {
            if(new_behind[i] == '+')
                continue;
            printf("%c",new_behind[i]);
        }
        printf("\n");
    }
    if(after[0] == '-')
    {
        for(i = 0;i < a;i++)
        {
            if(behind[i] == '.')
            {
                flag = i;
            }
        }
        b = atoi(after);
        //printf("%d\n",b);
        if(behind[0] == '-')
            printf("%c",behind[0]);
        for(i = b - 1;i < 0;i++)
        {
            if(i == b)
                printf(".");
            else
                printf("0");
        }
        for(i = 1;i < a;i++)
        {
            if(i == flag)
                continue;
            printf("%c",behind[i]);
        }
        printf("\n");
    }
    return 0;
}