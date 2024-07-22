#include<stdio.h>
int main(){
	int i;
	int count=0;
	for(i=1;i<=100;i++){
		if (i%7==0)
			count+=1;
	}
	printf("%d",count);
}
