#include<stdio.h>

int main(){
	int N,M,i,j,temp1,temp2;
	scanf("%d %d",&N,&M);
	int a[N];
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(j=0;j<M;j++){
		temp1=a[0];
		temp2=a[0];
		for(i=1;i<N;i++){
			temp1=a[i];
			a[i]=temp2;
			temp2=temp1;
		}
		a[0]=temp2;
	}
	for(i=0;i<N-1;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[N-1]);
	return 0;
}
