#include<stdio.h>
int main(){
	printf("������������������,�м��ö��ż����");
	int a;
	int b;
	int max=0;
	scanf("%d,%d",&a,&b);
	if (a>b)
		max=a;
	else if(a<b)
		max=b;
	else
		printf("һ����") ;
		return 0;
	printf("%d",max);
}
