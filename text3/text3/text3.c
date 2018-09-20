#define _CRT_SECURE_NO_WARNINGS 1

//1.将数组A中的内容和数组B中的内容进行交换。（数组一样大)
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
//	printf("数组a中的值为：\n");
//	putout(a);
//	printf("\n");
//	printf("数组b中的值为：\n");
//	putout(b);
//	printf("\n");
//	change(a,b);
//	printf("交换过后数组a中的值为：\n");
//	putout(a);
//	printf("\n");
//	printf("交换过后数组b中的值为：\n");
//	putout(b);
//	printf("\n");
//	return 0;
//}

////2.计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
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
////3.编写程序数一下 1到 100 的所有整数中出现多少次数字9。
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
	printf("\n9出现了%d次\n",count);
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	char input[20]={0};
//	char c;
//	char ch;
//	printf("请输入密码：\n");
//	scanf("%s",input);
//	while((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("请确认密码（Y/N）：\n");
//	c=getchar();
//	if(c=='Y')
//	{
//		printf("确认成功\n");
//	}
//	if(c=='N')
//	{
//		printf("放弃确认\n");
//	}s
//	return 0;
//}