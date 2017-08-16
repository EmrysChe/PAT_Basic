#include<stdio.h>
#include<ctype.h>

int main()
{
    int i;
    int flag = 0;
    int m = 0;
    int d = 0;
    int h = 0;
    char day[7][5] = {"MON\0","TUE\0","WED\0","THU\0","FRI\0","SAT\0","SUN\0"};
    char str1[60];
    char str2[60];
    char str3[60];
    char str4[60];

    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    scanf("%s",str4);

    for(i = 0;str1[i] != '\0';i++)
    {
        if(str1[i] == str2[i])
        {
            if(flag == 0)
            {
                if(str1[i] <= 'G' && str1[i] >= 'A')
                {
                    d =(int)str1[i] - 'A';
                    flag++;
                }
            }
            else if(flag == 1)
            {
                if(str1[i] <= '9' && str1[i] >= '0')
                {
                    h = (int)str1[i] - '0';
                    break;
                }
                if(str1[i] <= 'N' && str1[i] >= 'A')
                {
                    h = (int)str1[i] - 'A' + 10;
                    break;
                }
            }
        }
    }

    for(i = 0;str3[i] != '\0';i++)
    {
        if(str3[i] == str4[i])
        {
            if(isalpha(str3[i]))
            {
                m = i;
                break;
            }
        }
    }

    printf("%s %02d:%02d",day[d],h,m);

    return 0;
}