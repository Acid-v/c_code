#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>






#include "add.h"
int main()
{
int a=10;
int b=20;
int sum=0;
//函数调用
sum=Add(a,b);
printf("%d\n",sum);
return 0;
}
























//int main()
//{
//int len=0;
////   1
////len=strlen("abc");
////printf("%d\n",len);
////   2
//printf("%d\n",strlen("abc"));
//return 0;
//}


//int main()
//{
//printf("%d,",printf("%d",printf("%d",43)));//43  返回2  打印2 返回1   4321
//return 0;}



//void Add(int* p)
//{
//	//*p++;//有问题  ++优先级比*高
//	//(*p)++;
//*p=*p+1;
//}
//
//int main()
//{
//int num=0;
//Add(&num);
//printf("num=%d\n",num);
//Add(&num);
//printf("num=%d\n",num);
//Add(&num);
//printf("num=%d\n",num);
//
//return 0;
//}



















//				//本质上arr是一个指针
//int binary_search(int arr[],int k,int sz)
//{
//	//算法的实现
//	int left=0;
//	int right=sz-1;
//	int mid=0;
//	while(left<=right)
//	{mid=(left+right)/2;
//	if(arr[mid]>k)
//	{right=mid-1;}
//	else if(arr[mid]<k)
//	{left=mid+1;}
//	else 
//	{return mid;}
//	}
//	return -1;
//
//}
// 
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了范围这个数的下标。找不到的返回-1
//
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int sz=sizeof(arr)/sizeof(arr[0]);//求元素个数
//	//
//	//					传递过去的是数组arr首地址的地址
//	int ret=binary_search(arr,k,sz);
//	if(ret==-1)
//	{
//	printf("找不到指定的数字\n");
//	}
//	else
//	{
//	printf("找到了，下标是:%d\n",ret);
//	}
//
//
//
//
//return 0;}








//int is_leap_year(int y)
//{
//if((y%4==0&&y%100!=0) || (y%400==0))
//	return 1;
//else
//	return 0;
//
//
//}
//
//
//int main()
//{
//int year=0;
//for(year=1000;year<=2000;year++)
//{
////判断year是否为闰年
//	if(1==is_leap_year(year))
//	{
//	printf("%d\n",year);	
//	}
//}
//return 0;
//}

















//int is_prime(int n)
//{
//	int m=0;
//	for(m=2;m<=sqrt(n);m++)
//	{
//	if(n%m==0)
//	{return 0;}
//	
//	}
//	return 1;
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//	//判断i是否为素数
//		if(is_prime(i)==1)
//			printf("%d\n",i);
//
//	}
//
//return 0;}






























////不能完成交换任务
//当实参传给形参的时候
//形参其实是实参的一个临时拷贝
//对形参的修改是不会改变实参的
//void Swap1(int x,int y)//void 意味着不返回值
//{
//int tmp=0;
//tmp=x;
//x=y;
//y=tmp;
//}


////能实现交换任务
//void Swap2(int* pa,int* pb)//int* pa说明pa是指针变量
//{
//int tmp;
//tmp=*pa;// *pa为解引用操作   根据地址找到它的数值
//*pa=*pb;
//*pb=tmp;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	printf("a=%d b=%d\n",a,b);
//	//Swap1(a,b);
//	Swap2(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//return 0;}









//int get_max(int x,int y)
//{
//if(x>y)
//return x;
//else
//	return y;
//
//}
//int main()
//{
//int a=10;
//int b=20;
//int max=get_max(a,b);
//printf("max=%d\n",max);
//
//
//
//return 0;}



















////memset
////memory -内存  set  -设置
//int main()
//
//{
//	char arr[]="hello world";
//	memset(arr,'*',5);
//	//***** world
//	printf("%s\n",arr);
//
//
//
//
//return 0;}



















//int main()
//{
//	//strcpy ---string copy 
//	//strlen ----string length  --字符串长度有关
//	char arr1[]="bit";
//	char arr2[]="########";
//	//bit\0####  \0为字符结束标志  遇到\0就结束了
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//
//return 0;
//}










////函数 计算求和
//int Add(int x,int y)
//{int z=0;
// z=x+y;
//return z;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	int sum=Add(a,b);
//	printf("%d\n",sum);
//return 0;}






////方法 计算求和
//void Add(int x,int y)
//{int z=0;
// z=x+y;
//printf("%d\n",z);
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	Add(a,b);
//return 0;}
