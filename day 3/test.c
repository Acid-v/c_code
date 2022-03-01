#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//#define 定义标识符常量
//#define MAX 100
//#define  可以定义宏---带参数

//函数的实现
//Max(int x,int y)
//{
//if (x>y)
//	return x;
//else return y;
//
//
//}
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main(){
//	//int a=MAX;
//	int a=10;
//	int b=20;
//	//函数
//	int max=Max(a,b);
//	printf("max=%d\n",max);
//	//宏的定义
//	max=MAX(a,b);
//	//max=(a>b?a:b);
//		printf("max=%d\n",max);
//		return 0;}





//static 修饰局部变量  
//局部变量的生命周期变长  出了作用域 也没有销毁
//static 修饰全局变量
//改变了变量的作用域  -让静态的全局变量只能在自己的源文件内部使用
//出了源文件就没法在使用了
//static 修饰函数
//也是改变了函数的作用域---不太准确
//static修饰的函数改变了函数的链接属性，
//外部连接属性  --->内部链接属性

//extern int Add(int,int);
////申明外部函数
//
//int main(){
//int a =10;
//int b =20;
//
//int sum=Add(a,b);
//printf("sum=%d\n",sum);
//
//
//
//
//return 0;}







//int main(){
//
//	//extern --申明外部符号的
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//
//
//return 0;}
//




//
//void test(){
//	//static 修饰局部变量  
//	//局部变量的生命周期变长  出了作用域 也没有销毁
//	//int a=1;  //这里的a是局部变量  进入创建 出去销毁
//	static int a=1; //静态局部变量
//	a++;
//	printf("a=%d\n",a);
//
//
//}
//int main(){
//	int i=0;
//	while (i<5)
//	{
//	test();
//	i++;
//	}
//return 0;}






//int  main()
//{
////  typedef --类型定义 --类型重定义
//	typedef unsigned int u_int;
//	unsigned int num=20;
//	u_int num2=20;
//
//
//return 0;
//}











//int main(){
//
//
//	//register  int a=10;// 建议把a定义成寄存器变量
//	int a=10;
//	a=-2;
//	//int  定义的变量是有符号的
//	//signed int;
//	unsigned int unm=1;
//	/*stuct--结构体关键字
//	union---联合体/共用体*/
//
//
//return 0;}
//int main()
//{
//	 int a=10;//局部变量前面默认省略了auto，局部变量都是自动变量
//	
//
//
//return 0;}





//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}


//只要是整数，内存中存储的都是二进制的补码
//正数----原码，反码，补码相同
//负数
//原码  除了符号位不变 ，其他位取反---->反码     反码+1    -----> 补码
//直接按照正负   原码的符号位变
//写出的二进制序列



//
//int main(){
//	//int arr[10]={0};
//	//arr[4];//--下标引用操作符
//	int a=10;
//	int b=20;
//	int sum=Add(a,b);//    ()  ---函数调用操作符
//return 0;}
//
//
//








//int main(){
//
//int a=(int)3.14;//强制类型转换
//printf("%d",a);
//
//
//return 0;}


//int main(){
//	int a=10;
//	int b=20;
//	int max=0;
//	max=(a>b?a:b);
//		/*if(a>b)
//			max=a;
//		else
//			max=b;*/
//printf("max=%d",max);
//return 0;}






//int main(){
////真  -非0
////假  -0
////&&  -逻辑与
////||  -逻辑或
//
//	int a=3;
//	int b=5;
//	int c=a&&b;
//	printf("c=%d",c);
//return 0;}
//



//int main()
//{
//int a=10;
////int b=a++;//后置++，先使用，再++
////int b=++a;//前置++，先++，再使用
////int b=a--;//后置--，先使用，再--
////int b=--a;//前置--，先--，再使用
//printf("a=%d b=%d\n",a,b);
//
//return 0;}


//int main()
//{
//
//int a=0;//4字节  32bit
//int b=~a;//按(二进制)位去反  //b是有符号的整型
////原码 反码 补码
////0000 0000 0000 0000 0000 0000 0000 0000
////1111 1111 1111 1111 1111 1111 1111 1111
////1000 0000 0000 0000 0000 0000 0000 0001
////负数在内存中存储的时候，存储的二进制的补码
//printf("%d\n",b);//使用的，打印的是这个数的原码
//
//
//
//return 0;}
//int main()
//{int a=10;
//int arr[]={1,2,3,4,5,6};//6*4=24
//printf("%d\n",sizeof(a));//与下一行代码等价
//printf("%d\n",sizeof a);//当sizeof求的是变量大小的时候 sizeof 可以省掉a的括号  sizeof是操作符  不是函数  如果是函数 a就不能省掉括号
//printf("%d\n",sizeof(int));//sizeof对于像int类的定义都不能省略括号
//printf("%d\n",sizeof(arr));
//printf("%d\n",sizeof(arr)/sizeof(arr[0]));
//
//
//
//return 0;
//}
