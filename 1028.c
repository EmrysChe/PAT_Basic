#include<stdio.h>
#include<string.h>

struct Man
{
    char name[6];
    int yy;
    int mm;
    int dd;
    long int age;
};

void mancpy(struct Man *a,struct Man b)
{
    a->yy = b.yy;
    a->mm = b.mm;
    a->dd = b.dd;
    a->age = b.age;
    strcpy(a->name,b.name);
}

int main()
{
    struct Man man[100000];
    struct Man old;
    struct Man young;
    int num,i;
    int il = 0;
    scanf("%d",&num);
    for(i = 0;i< num;i++)
    {
        scanf("%s %d/%d/%d",man[i].name,&man[i].yy,&man[i].mm,&man[i].dd);
        man[i].age = man[i].yy * 10000 + man[i].mm * 100 + man[i].dd;
    }
    for(i = 0;i < num;i++)
    {
        if((man[i].age < 18140906) || (man[i].age > 20140906))
        {
            man[i].age = 0;
            il++;
        }
    }
    //printf("%d\n",il);
    for(i = 0;i< num;i++)
    {
        if(man[i].age == 0)
            continue;
        else
        {
            mancpy(&young,man[i]);
            mancpy(&old,man[i]);
            break;
        }
    }
    //printf("%s %d/%d/%d\n",old.name,old.yy,old.mm,old.dd);
    //printf("%s %d/%d/%d\n",young.name,young.yy,young.mm,young.dd);
    for(i = 0;i< num;i++)
    {
        if(man[i].age == 0)
            continue;
        else
        {
            if(man[i].age < old.age)
            {
                mancpy(&old,man[i]);
            }
            if(man[i].age > young.age)
            {
                mancpy(&young,man[i]);
            }
        }
    }
    if((num - il) == 0)
    {
        printf("%d\n",(num - il));
    }
    else
        printf("%d %s %s\n",(num - il),old.name,young.name);
    return 0;
}