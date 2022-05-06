#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"
//int main()
//{
//	int a=10;
//	int b=20;
//	int sum=Add(a,b);
//	printf("%d\n",sum);
//
//
//return 0;
//}


////递归   
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}



//void print(int n)
//{//函数的实现
//if(n>9)
//{
//print(n/10);
//}
//printf("%d  ",n%10);
//}
//int main()
//{
//unsigned int num=0;
//scanf("%d",&num);//1234
////递归
//print(num);
////printf(1234)
////printf(123) 4
////printf(12)  3 4
////printf(1)   2 3 4
//return 0;
//}

//int my_strlen(char* str)
//{
//	int count=0;
//	while(*str != '\0')
//	{
//	count++;
//	str++;
//	}
//	return count;
//
//}



//int my_strlen(char* str)
//{
//	if(*str != '\0')//解引用地址    字符用''表示 
//	return 1+my_strlen(str+1);//由于数组数组传参，传递的是第一个元素地址   每次不符合if语句  执行地址+1
//	else
//		return 0;
//
//}
////把大事化小
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//
//#include<string.h>
//int main()
//{
//char arr[]="bit";
////int len=strlen(arr);//求字符串长度
////printf("%d\n",len);
//int len=my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//printf("len=%d\n",len);
//return 0;
//}


//循环
//int Fac1(int n)
//{
//int i=0;
//int ret=1;
//for(i=1;i<=n;i++)
//	{
//		ret *=i;
//	}
//	return ret;
//}

////递归
//int Fac2(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*Fac2(n-1);
//}
//
//int main()
//{
//	//求n的阶乘
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	//ret=Fac1(n);//循环的方式
//	ret=Fac2(n);//递归的方式
//	printf("%d\n",ret);
//return 0;}


//斐波那契数列
//1 1 2 3 5 8 13 21 34 55
//


////描述第n个斐波那契数列的时候
////递归求斐波那契数列效率不高
//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//
//
//return 0;
//}


////循环比较合适
//int Fib2(int n)
//{
//	int a=1;
//	int b=1;
//	int c=1;
//	while(n>2)
//	{
//	c=a+b;
//	a=b;
//	b=c;
//	n--;
//	
//	}
//
//	return c;
//
//}
//
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	/*ret=Fib(n);*/
//	ret=Fib2(n);
//	printf("ret=%d",ret);
//return 0;}


//递归容易溢出
//void test(int n)
//{
//if(n<10000)
//{test(n-1);
//}
//}
//
//int main()
//{
//	test(1);
//return 0;}





//#include<string.h>
//int main()
//{
//	//创建一个数组-存放整型-10个
//	int arr[10]={1,2,3,};//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5]={'a','b'};//默认存放 a b 剩余默认为0   把字符{'a','b'}改成{'a',98}也可以 在里面会在自动转化为b
//	char arr3[5]="ab";//默认存放三个元素 a b \0   只不过\0和0在数值上没区别  剩余默认为0
//	char arr4[]="abcdef";   //七个元素abcdef\0
//	printf("%d\n",sizeof(arr4));
//	//sizeof 计算arr4所占空间的大小
//	//7个元素-char 7*1=7
//	printf("%d\n",strlen(arr4));
//	//strlen  求字符串的长度 —— '\0'之前的字符个数
//	//[a b c d e f \0]
//	//6
//
// 	/*int n=5;
//	char[n];*/    //数组大小必须要用常量表示
//return 0;}


//#include<string.h>
//int main()
//{
//
//char arr1[]="abc";
//char arr2[]={'a','b','c'};
//printf("%d\n",sizeof(arr1));// a b c \0
//printf("%d\n",sizeof(arr2));//a b c
//printf("%d\n",strlen(arr1));//3
//printf("%d\n",strlen(arr2));//随机值
//return 0;
//}

//#include<string.h>
//int main()
//{
//	//char arr[]="abcdef";//[a] [b] [c] [d] [e] [f] [\0]
//	////printf("%c\n",arr[3]);
//	//int i=0;
//	//for(i=0;i<(int)strlen(arr);i++)// strlen 默认返回一个无符号整型
//	//{
//	//printf("%c ",arr[i]);
//	//}
//	int arr[]={1,2,3,4,5,6,7,8,9,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//	printf("%d ",arr[i]);
//	}
//return 0;}



//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//}


//int main()
//{
//	int arr[3][4]={{1,2,3},{4,5}};//第一行 1 2 3   第二行 4 5
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	int i=0;
//	//char ch[5][6];
//	//int arr[]={1,2,3,4};
//	//int arr[][4]={{1,2,3,4},{5,6,7,8}};//最多省略行 不能省略列
//	for(i=0;i<3;i++)
//	{
//	int j=0;
//	for(j=0;j<4;j++)
//	{
//	printf("%d ",arr[i][j]);
//	}
//	printf("\n");
//	}
//	return 0;
//}


int main()
{
	int arr[3][4]={{1,2,3},{4,5}};//第一行 1 2 3   第二行 4 5
	//1 2 3 0
	//4 5 0 0
	//0 0 0 0
	int i=0;
	for(i=0;i<3;i++)
	{
	int j=0;
	for(j=0;j<4;j++)
	{
		printf("arr[%d][%d]地址：%p\n",i,j,&arr[i][j]);
	}
	}
	return 0;
}
