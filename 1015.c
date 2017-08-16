#include<stdio.h>
#include<stdlib.h>

#define MAX_N 100000

struct node
{
	int num;
	int de;
	int cai;
};

int comp(const void *p1,const void *p2)
{
	struct node *c = (struct node *)p1;
	struct node *d = (struct node *)p2;
	if(c->de + c->cai != d->de + d->cai)
        return (d->de + d->cai) - (c->de + c->cai);
	else if(c->de != d->de)
        return d->de - c->de;
	else 
        return c->num - d->num;
}
int main()
{
	int N,L,H,i;
	scanf("%d %d %d",&N,&L,&H);
	struct node stu[MAX_N],stu1[MAX_N],stu2[MAX_N],stu3[MAX_N],stu4[MAX_N];
	int cnt1 = 0,cnt2 = 0,cnt3 = 0,cnt4 = 0;
	for(i = 0;i < N;i++)
    {
		scanf("%d %d %d",&stu[i].num,&stu[i].de,&stu[i].cai);
		if(stu[i].de >= L && stu[i].cai >= L)
        {
			if(stu[i].de >= H && stu[i].cai >= H)
            {
				stu1[cnt1++] = stu[i];
                continue;
			}
			if(stu[i].de >= H && stu[i].cai < H)
            {
				stu2[cnt2++] = stu[i];
                continue;
			}
			if(stu[i].de < H && stu[i].cai < H && stu[i].de >= stu[i].cai)
            {
				stu3[cnt3++] = stu[i];
                continue;
			}
			else
            {
				stu4[cnt4++] = stu[i];
                continue;
			}	
		}
	}
	printf("%d\n",cnt1 + cnt2 + cnt3 + cnt4);
	qsort(stu1,cnt1,sizeof(stu1[0]),comp);
	qsort(stu2,cnt2,sizeof(stu2[0]),comp);
	qsort(stu3,cnt3,sizeof(stu3[0]),comp);
	qsort(stu4,cnt4,sizeof(stu4[0]),comp);
	for(i = 0;i < cnt1;i++){
		printf("%d %d %d\n",stu1[i].num,stu1[i].de,stu1[i].cai);
	}
	for(i = 0;i < cnt2;i++){
		printf("%d %d %d\n",stu2[i].num,stu2[i].de,stu2[i].cai);
	}
	for(i = 0;i < cnt3;i++){
		printf("%d %d %d\n",stu3[i].num,stu3[i].de,stu3[i].cai);
	}
	for(i = 0;i < cnt4;i++){
		printf("%d %d %d\n",stu4[i].num,stu4[i].de,stu4[i].cai);
	}
    return 0;
}