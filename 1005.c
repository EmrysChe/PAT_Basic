#include<stdio.h>

#define N 101
#define M 5000

int main(){
	int k,i,j,temp;
	int x=0;
	int input[N],output[N];
	short judge[M]={0};
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&input[i]);
	}
	for(i=0;i<k;i++){
		x=input[i];
		for(;x>1;){
			if(x%2==0){
				x=x/2;
			}
			else{
				x=(3*x+1)/2;
			}
			if(x!=1)
				judge[x]=1;
			else 
				break;
		}
	}
	x=0;
	for(i=0;i<k;i++){
		if(judge[input[i]]!=1)
			output[x++]=input[i];
	}
	for(i=0;i<k;i++){
		for(j=i+1;j<k;j++){
			if(output[i]<output[j]){
				temp=output[i];
				output[i]=output[j];
				output[j]=temp;
			}
		}
	}
	for(i=0;i<x-1;i++)
		printf("%d ",output[i]);
	printf("%d\n",output[i]);
	return 0;
}
