#include<stdio.h>
#define N 1000
int main(){
	char n[N];
	char z[N];
	int x=0;
	int y;
	int i;
	scanf("%s",n);
	for(i=0;n[i]!='\0';i++){
			y=((int)n[i])-48;
			x+=y;
	}
	sprintf(z,"%d",x);
	for(i=0;z[i]!='\0';i++){
		if(z[i+1]=='\0'){
			if(z[i]=='0')
				printf("ling");
			if(z[i]=='1')
				printf("yi");
			if(z[i]=='2')
				printf("er");
			if(z[i]=='3')
				printf("san");
			if(z[i]=='4')
				printf("si");
			if(z[i]=='5')
				printf("wu");
			if(z[i]=='6')
				printf("liu");
			if(z[i]=='7')
				printf("qi");
			if(z[i]=='8')
				printf("ba");
			if(z[i]=='9')
				printf("jiu");
		}
		else{
			if(z[i]=='0')
				printf("ling ");
			if(z[i]=='1')
				printf("yi ");
			if(z[i]=='2')
				printf("er ");
			if(z[i]=='3')
				printf("san ");
			if(z[i]=='4')
				printf("si ");
			if(z[i]=='5')
				printf("wu ");
			if(z[i]=='6')
				printf("liu ");
			if(z[i]=='7')
				printf("qi ");
			if(z[i]=='8')
				printf("ba ");
			if(z[i]=='9')
				printf("jiu ");
		}
	}
	return 0;
}
