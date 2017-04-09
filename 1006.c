#include<stdio.h>

int main(){
	int k,i,B,S,G;
	scanf("%d",&k);
	B=k/100;
	S=(k/10)%10;
	G=k%10;
	for(i=0;i<B;i++)
		printf("B");
	for(i=0;i<S;i++)
		printf("S");
	for(i=0;i<G;i++)
		printf("%d",i+1);
	printf("\n");
	return 0;
}
