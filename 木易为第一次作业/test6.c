#include<stdio.h>
int main(){
	int i;
	int sum=0;
	int n;
	printf("����1~n�ĺͣ�������n:");
	scanf("%d",&n) ;
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("%d",sum);
}
