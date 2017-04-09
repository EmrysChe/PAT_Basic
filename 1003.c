#define N 1000
#include<stdio.h>  
#include<string.h>  

char a[N];  

int main(){
	int num;  
  int count1,count2,count3;  
  scanf("%d",&num);  
  while(num--){  
  	scanf("%s",a);  
    count1=count2=count3=0;  
    int i,len=strlen(a);  
    int flag=0;  
    int cnt=0;  
    for(i=0;i<len;++i){  
    	if(flag==0){  
      	if(a[i]=='A'){  
        	count1++;  
          continue;
					}  
        else if(a[i]=='P'){
					flag++;  
          continue;  
        }  
        else if(a[i]=='T'){  
          cnt=1;  
          break;  
        }
			}  
      if(flag==1){  
      	if(a[i]=='A'){  
        	count2++;  
          continue;  
        }  
        else if(a[i]=='T'){
					flag++;  
          continue;  
        }  
        else if(a[i]=='P'){  
          cnt=1;  
          break;  
        }
			}  
      if(flag==2){  
      	if(a[i]=='A'){  
        	count3++;  
          continue;  
        }  
        else if(a[i]!='A'){
          cnt=1;
          break;  
        }  
      }
    }  
    if(!cnt){  
      if(flag==2&&count1*count2==count3&&count2)  
        printf("YES\n");  
      else  
        printf("NO\n");  
    }  
    else   
      printf("NO\n");
  }
  return 0;  
}
