#include<stdio.h>
#include<string.h>

int main(){
	int num;//定义变量num
	scanf("%d", &num);//接收num
	if (num % 2 == 0) printf("YES");//判断是否是偶数，是输出yes
	else printf("NO");//否输出no

	//int num;//定义变量num
	//scanf("%d",&num);//输入变量num
	//if (num == 1)printf("星期一");//判断num
	//else if (num == 2)printf("星期二");
	//else if (num == 3)printf("星期三");
	//else if (num == 4)printf("星期四");
	//else if (num == 5)printf("星期五");
	//else if (num == 6)printf("星期六");
	//else printf("星期七");


	//int month;//定义变量month
	//scanf("%d",&month);//接受month
	//if (month >= 1 && month < 4)printf("%d是第一季度",month);//判断month
	//if (month >= 4 && month < 7)printf("%d是第二季度",month);
	//if (month >= 7 && month < 10)printf("%d是第三季度",month);
	//if (month >= 10 && month < 12)printf("%d是第四季度",month);


	//int n1, n2;//定义两个变量
	//printf("输入第一个数\n");
	//scanf("%d",&n1);
	//printf("输入第二个数\n");//分别接收
	//scanf("%d", &n2);
	//int max = n1;//定义最大的数n1
	//if (n2 > n1)max = n2;//如果n2比n1大则将n2赋值max
	//printf("大数%d",max);//输出max

	//int n1, n2,n3;//定义两个变量
	//printf("输入第一个数\n");
	//scanf("%d",&n1);
	//printf("输入第二个数\n");//分别接收
	//scanf("%d", &n2);
	//printf("输入第个三数\n");//分别接收
	//scanf("%d", &n3);
	//int max = n1;//定义最大的数n1
	//if (n2 > n1 || n3 > n1) {//n2,n3有一个比n1大，则max=n2
	//	max = n2;
	//	if (n3 > n2)max = n3;//n3比n2大则max=n3
	//}
	//printf("大数%d",max);//输出max

	//int arrayMax(int a[],int );
	//int a[] = { 1,6,10,11,8,100,99,0 }, length = sizeof(a) / sizeof(int);//定义数组，其数组长度
	///*printf("大数sizeof(a)=%d\n", sizeof(a)/sizeof(int));*/
	//int max =  arrayMax(a,length);
	//printf("max=%d", max);


	//int arr[3];//定义数组
	//for (int i = 0; i < 3; i++) {//输入
	//	printf("输入第i个数\n");
	//	scanf("%d", &arr[i]);
	//}	
	//int num[10] = { 0,1,2,3,4,5,6,7,8,9 },numLength=10;//定义一个数组含有0~9
	//for (int j = 0; j < 3; j++) {//遍历arr
	//	for (int i = 0; i < 10; i++) {//遍历num
	//		if (arr[j] == num[i]) { //arr中的值如果与num相等
	//			for (; i < 10; i++) //删除num中的
	//				num[i] = num[i + 1];
	//			numLength--;//删除 长度减一
	//		}
	//	}
	//}
	//for (int i = 0; i < numLength; i++) {//输出num数组
	//	printf("%d\n",num[i]);
	//}



	int arr[6];
	for (int i = 0; i < 6; i++) {
		printf("第%d个数\n",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < 6; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 6; i++)printf("%d\n",arr[i]);

	return 0;
}
int arrayMax(int a[],int length) {//找最大值
	int max = a[0];
	for (int i = 0; i < length; i++) {//遍历a，找到max替换
		if (a[i] > max) max = a[i];
	}
	return max;//返回最大值
}