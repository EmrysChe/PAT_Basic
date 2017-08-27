#include<stdio.h>

#define MAXNUM 50

int main()
{
	int b[10] = {0};
	int a[MAXNUM];
	int i,j,tmp;
	int cnt = 0;
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&b[i]);
	}
	j = 0;
	for(i = 0;i < 10;i++)
	{
		while(j < b[i])
		{
			a[cnt] = i;
			//printf("%d\n",a[cnt]);
			cnt++;
			j++;
		}
		j = 0;
	}
	for(i = 0; i < cnt;i++)
	{
		if(a[i] != 0)
		{
			tmp = a[0];
			a[0] = a[i];
			a[i] = tmp;
			break;
		}
	}
	for(i = 0;i < cnt;i++)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}