#include<stdio.h>
int main(){
	printf("������������������,�м��ö��ż����");
	int a;
	int b;
	int c; 
	int max=0;
	scanf("%d,%d,%d",&a,&b,&c);
	//printf("%d%d%d",a,b,c);
	if (a>=b)
		if(a>=c)
			max=a;
		else
			max=c;
	else 
		if (b>=c)
			max=b;
		else
			max=c;
	printf("%d",max);
}
