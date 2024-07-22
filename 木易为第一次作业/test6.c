#include<stdio.h>
int main(){
	int i;
	int sum=0;
	int n;
	printf("计算1~n的和，请输入n:");
	scanf("%d",&n) ;
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("%d",sum);
}
