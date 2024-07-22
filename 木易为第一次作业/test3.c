#include<stdio.h>
int main(){
	int month;
	printf("请输入1-12的整数：");
	scanf("%d",&month);
	if (month<=6)
		if (month<=3)
			printf("春季");
		else
			printf("夏季");
	else
		if (month<=9)
			printf("秋季");	
		else 
			printf("冬季");
	return 0;
	}
