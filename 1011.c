#include<stdio.h>

#define N 11

int main(){
	int T,i;
	long int a[N][3];
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%ld %ld %ld",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(i=0;i<T;i++){
		if(a[i][0]+a[i][1]>a[i][2])
			printf("Case #%d: true\n",i+1);
		else printf("Case #%d: false\n",i+1);
	}
	return 0;
}
