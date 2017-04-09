#include<stdio.h>
#include<string.h>
#define N 1000
struct stu{
	char name[11];
	char number[11];
	int mark;
};

int main(){
	int n,i;
	int min,max,mindex,maxdex;
	scanf("%d",&n);
	struct stu stu[N];
	for(i=0;i<n;i++){
		scanf("%s %s %d",stu[i].name,stu[i].number,&stu[i].mark);
	}
	min=101;
	max=-1;
	for(i=0;i<n;i++){
		if(stu[i].mark>max){
			max=stu[i].mark;
			maxdex=i;
			
		}
		if(stu[i].mark<min){
			min=stu[i].mark;
			mindex=i;
		}
	}
	printf("%s %s\n",stu[maxdex].name,stu[maxdex].number);
	printf("%s %s\n",stu[mindex].name,stu[mindex].number);
	return 0;
}
