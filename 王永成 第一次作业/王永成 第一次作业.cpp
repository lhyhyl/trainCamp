#include<stdio.h>
#include<string.h>

int main(){
	int num;//�������num
	scanf("%d", &num);//����num
	if (num % 2 == 0) printf("YES");//�ж��Ƿ���ż���������yes
	else printf("NO");//�����no

	//int num;//�������num
	//scanf("%d",&num);//�������num
	//if (num == 1)printf("����һ");//�ж�num
	//else if (num == 2)printf("���ڶ�");
	//else if (num == 3)printf("������");
	//else if (num == 4)printf("������");
	//else if (num == 5)printf("������");
	//else if (num == 6)printf("������");
	//else printf("������");


	//int month;//�������month
	//scanf("%d",&month);//����month
	//if (month >= 1 && month < 4)printf("%d�ǵ�һ����",month);//�ж�month
	//if (month >= 4 && month < 7)printf("%d�ǵڶ�����",month);
	//if (month >= 7 && month < 10)printf("%d�ǵ�������",month);
	//if (month >= 10 && month < 12)printf("%d�ǵ��ļ���",month);


	//int n1, n2;//������������
	//printf("�����һ����\n");
	//scanf("%d",&n1);
	//printf("����ڶ�����\n");//�ֱ����
	//scanf("%d", &n2);
	//int max = n1;//����������n1
	//if (n2 > n1)max = n2;//���n2��n1����n2��ֵmax
	//printf("����%d",max);//���max

	//int n1, n2,n3;//������������
	//printf("�����һ����\n");
	//scanf("%d",&n1);
	//printf("����ڶ�����\n");//�ֱ����
	//scanf("%d", &n2);
	//printf("����ڸ�����\n");//�ֱ����
	//scanf("%d", &n3);
	//int max = n1;//����������n1
	//if (n2 > n1 || n3 > n1) {//n2,n3��һ����n1����max=n2
	//	max = n2;
	//	if (n3 > n2)max = n3;//n3��n2����max=n3
	//}
	//printf("����%d",max);//���max

	//int arrayMax(int a[],int );
	//int a[] = { 1,6,10,11,8,100,99,0 }, length = sizeof(a) / sizeof(int);//�������飬�����鳤��
	///*printf("����sizeof(a)=%d\n", sizeof(a)/sizeof(int));*/
	//int max =  arrayMax(a,length);
	//printf("max=%d", max);


	//int arr[3];//��������
	//for (int i = 0; i < 3; i++) {//����
	//	printf("�����i����\n");
	//	scanf("%d", &arr[i]);
	//}	
	//int num[10] = { 0,1,2,3,4,5,6,7,8,9 },numLength=10;//����һ�����麬��0~9
	//for (int j = 0; j < 3; j++) {//����arr
	//	for (int i = 0; i < 10; i++) {//����num
	//		if (arr[j] == num[i]) { //arr�е�ֵ�����num���
	//			for (; i < 10; i++) //ɾ��num�е�
	//				num[i] = num[i + 1];
	//			numLength--;//ɾ�� ���ȼ�һ
	//		}
	//	}
	//}
	//for (int i = 0; i < numLength; i++) {//���num����
	//	printf("%d\n",num[i]);
	//}



	int arr[6];
	for (int i = 0; i < 6; i++) {
		printf("��%d����\n",i+1);
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
int arrayMax(int a[],int length) {//�����ֵ
	int max = a[0];
	for (int i = 0; i < length; i++) {//����a���ҵ�max�滻
		if (a[i] > max) max = a[i];
	}
	return max;//�������ֵ
}