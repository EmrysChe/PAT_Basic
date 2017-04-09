#include<stdio.h>

int F(int n){
	int y=0;
	if(n==1)
		y=0;
	else
	{
		for(;n>1;){
			if(n%2==0){
				n=n/2;
			}
			else{
				n=(3*n+1)/2;
			}
			y++;
		}
	}
	return y;
}

int main(){
	int n=0,y=0;
	scanf("%d",&n);
	y=F(n);
	printf("%d",y);
	return 0;
}
