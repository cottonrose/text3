#define _CRT_SECURE_NO_WARNINGS 1

//1.������A�е����ݺ�����B�е����ݽ��н�����������һ����)
//#include<stdio.h>
//
//void change(int a1[5],int b1[5])
//{
//	int j = 0;
//	int c = 0;
//	for(j=0;j<5;j++)
//	{
//		c = a1[j];
//		a1[j] = b1[j];
//		b1[j] = c;
//	}
//}
//
//void putout(int m[5])
//{
//	int k = 0;
//	for(k=0;k<5;k++)
//	{
//		printf("%d ",m[k]);
//	}
//}
//int main()
//{
//	void change(int a1[5],int b1[5]);
//	void putout(int m[5]);
//	int a[5] = {47,69,17,20,9};
//	int b[5] = {29,19,43,53,15};
//	int i = 0;
//	printf("����a�е�ֵΪ��\n");
//	putout(a);
//	printf("\n");
//	printf("����b�е�ֵΪ��\n");
//	putout(b);
//	printf("\n");
//	change(a,b);
//	printf("������������a�е�ֵΪ��\n");
//	putout(a);
//	printf("\n");
//	printf("������������b�е�ֵΪ��\n");
//	putout(b);
//	printf("\n");
//	return 0;
//}

////2.����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double sum = 1;
//	double n = 0;
//	for(n=2;n<=100;n++)
//	{
//		sum = sum + pow(-1,n+1)/n;
//	}
//	printf("%f\n",sum);
//	return 0;
//}
////3.��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
#include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for(i=1;i<=100;i++)
	{
		if(i%10 == 9)
		{
			count++;
			printf("%d ",i);
		}
		if(i/10 == 9)
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\n9������%d��\n",count);
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	char input[20]={0};
//	char c;
//	char ch;
//	printf("���������룺\n");
//	scanf("%s",input);
//	while((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("��ȷ�����루Y/N����\n");
//	c=getchar();
//	if(c=='Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	if(c=='N')
//	{
//		printf("����ȷ��\n");
//	}s
//	return 0;
//}