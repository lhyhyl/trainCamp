#include<stdio.h>
int main(){
	printf("请依次输入两个整数,中间用逗号间隔：");
	int a;
	int b;
	int max=0;
	scanf("%d,%d",&a,&b);
	if (a>b)
		max=a;
	else if(a<b)
		max=b;
	else
		printf("一样大") ;
		return 0;
	printf("%d",max);
}
