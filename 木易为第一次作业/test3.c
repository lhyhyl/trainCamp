#include<stdio.h>
int main(){
	int month;
	printf("������1-12��������");
	scanf("%d",&month);
	if (month<=6)
		if (month<=3)
			printf("����");
		else
			printf("�ļ�");
	else
		if (month<=9)
			printf("�＾");	
		else 
			printf("����");
	return 0;
	}
