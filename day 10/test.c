#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>//给system使用
#include<string.h>//给strcmp使用
//#include<limits.h>
int main()
{
	char input[20]={0};//存储数据
	//关机
	//system()  ---专门用来执行系统命令的
	system("shutdown -s -t 60");//关机
again:
	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s",input);// %s--字符串
	if(strcmp(input,"我是猪")==0)//判断input中放的是不是“我是猪”--strcmp---string compare  相同则会输出0；
	{
	system("shutdown -a");
	}
	else
	{
		goto again;
	}
return 0;}
//int main()
//{
//	int arr[]={1,2,3,4,5,1,2,3,4};
//	int i=0;
//	int ret=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//计算数组的元素个数
//	for (i=0;i<sz;i++)
//	{
//	ret=ret^arr[i];
//	}
//	printf("单身狗：%d\n",ret);
//return 0;
//}

//int main()
//{
//	int arr[]={1,2,3,4,5,1,2,3,4};
//	//找出单身狗
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//计算数组的元素个数
//	for (i=0;i<sz;i++)
//	{
//		//统计arr[i]在arr数组中出现了几次
//	int count=0;//计数器
//	int j=0;
//	for(j=0;j<=sz;j++)
//	{
//	if(arr[i]==arr[j])
//	{count++;}
//	}
//	if(count==1)
//	{
//		printf("单身狗是%d",arr[i]);
//		break;
//	}
//	}
//return 0;}
//int main()
//{
//	int a=3;
//	int b=5;
//	//INT_MAX;2147483647
//	printf("交换后：a=%d,b=%d\n",a,b);
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	printf("交换前：a=%d,b=%d\n",a,b);
//return 0;}
//int main()
//{
//	int a=3;
//	int b=5;
//	//INT_MAX;2147483647
//	printf("交换后：a=%d,b=%d\n",a,b);
//	//溢出的问题
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("交换前：a=%d,b=%d\n",a,b);
//return 0;}
//int main()
//{
//
//printf("hello world\n");
//
//return 0;
}
