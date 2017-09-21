#include<stdio.h>

int main()
{
    char str1[81];
    char str2[81];
    char broken[81];
    char out[81];
    int i,j;
    int flag = 0;
    int breakflag = 0;
    scanf("%s",str1);
    scanf("%s",str2);
    for(i = 0;str1[i] != '\0';i++)
    {
        for(j = 0;str2[j] != '\0';j++)
        {
            if(str1[i] == str2[j])
            {
                breakflag = 1;
                break;
            }
        }
        if(breakflag == 0)
        {
            broken[flag] = str1[i];
            flag++;
        }
        breakflag = 0;
    }
    broken[flag] = '\0';
    //printf("%s\n",broken);
    for(i = 0;i < flag;i++)
    {
        for(j = i + 1;j < flag;j++)
        {
            if(broken[i] == broken[j])
                broken[j] = '\0';
            if((broken[i] <= 'z') && (broken[i] >= 'a'))
            {
                if(broken[i] - 32 == broken[j])
                    broken[j] = '\0';
            }
            if((broken[i] <= 'Z') && (broken[i] >= 'A'))
            {
                if(broken[i] + 32 == broken[j])
                    broken[j] = '\0';
            }
        }
    }
    
    for(i = 0;i < flag;i++)
    {
        if((broken[i] <= 'z') && (broken[i] >= 'a'))
            broken[i] = broken[i] - 32;
        //printf("%c",broken[i]);
    }
    j = 0;
    for(i = 0;i < flag;i++)
    {
        if(broken[i] != '\0')
        {
            out[j] = broken[i];
            j++;
        }
    }
    out[j] = '\0';
    printf("%s\n",out);

    return 0;
}