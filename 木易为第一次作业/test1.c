#include<stdio.h>
int main(){
	int a;
	printf("请输入1-7的整数：");
	scanf("%d",&a);
	switch(a){
		case 1:printf("星期一"); break;
		case 2:printf("星期二"); break;
		case 3:printf("星期三"); break;
		case 4:printf("星期四"); break;
		case 5:printf("星期五"); break;
		case 6:printf("星期六"); break;
		case 7:printf("星期七"); break;
		default:break;
	}
	return 0;
}
