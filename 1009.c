#include<stdio.h>

#define N 81

int main(){
	char str[N];
	int i,j,k;
	int flag[N];
	int temp=0;
	j=0;
	for(i=0;str[i-1]!='\n'&&i<N;i++){
		scanf("%c",&str[i]);
	}
	for(i=0;str[i-1]!='\n';i++){
			temp+=1;
	}
	for(i=0;str[i-1]!='\n';i++){
		if(str[i]==' '){
			flag[j]=i;
			j+=1;
		}
	}
	flag[j]=temp-1;
	for(i=j;i>0;i--){
		for(k=flag[i-1]+1;k<flag[i];k++)
			printf("%c",str[k]);
			printf(" ");
	}
	for(i=0;str[i]!=' ';i++)
		printf("%c",str[i]);
	printf("\n");
	return 0;
}
