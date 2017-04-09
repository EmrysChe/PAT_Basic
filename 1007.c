#include<stdio.h>
#include<math.h>

#define M 100000
int main(){
	long int N,i,j,k;
	long int flag1=0;
	long int flag2=1;
	long int flag3=0;
	long int prime[M]={1};
	scanf("%ld",&N);
	for(i=2;i<=N;i++){
		flag1=0;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0)
				flag1=flag1+1;
		}
		if(flag1==0){
			prime[flag2]=i;
			flag2=flag2+1;
		}
	}
	for(i=1;i<flag2;i++){
		if(prime[i]-prime[i-1]==2){
			flag3=flag3+1;
		}
	}
	printf("%ld\n",flag3);
	return 0;
}
