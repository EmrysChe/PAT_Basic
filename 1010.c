#include<stdio.h>

#define N 1000
int main(){
	int a[N][2];
	int i;
	int count=0;
	for(i=0;i<N;i++){
			scanf("%d %d",&a[i][0],&a[i][1]);
		if(a[i][1]==0)
			break;
		count+=1;
	}
	for(i=0;i<count;i++){
		if(i<count-1)
			printf("%d %d ",a[i][0]*a[i][1],a[i][1]-1);
		else
			printf("%d %d\n",a[i][0]*a[i][1],a[i][1]-1);
	}
	if(count==0)
		printf("0 0\n");
	return 0;
}
