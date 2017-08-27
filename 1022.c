#include<stdio.h>

int main()
{
	long int A,B,D,sum;
	int sumD[100];
	scanf("%ld %ld %ld",&A,&B,&D);
	sum = A + B;
	int i = 0;
	int cnt = 0;
	int tmp;
	while(sum / D != 0)
	{
		sumD[i] = sum % D;
		sum = sum / D;
		i++;
	}
	sumD[i] = sum % D;
	cnt = i;
	for(i = 0;i <= cnt/2;i++)
	{
		tmp = sumD[i];
		sumD[i] = sumD[cnt - i];
		sumD[cnt - i] = tmp;
	}
	for(i = 0;i <= cnt;i++)
	{
		printf("%d",sumD[i]);
	}
	printf("\n");
	return 0;
}
