 #define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//写一段代告诉我们当前机器的字节序是什么

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端模式\n");
//	}
//	else
//	{
//		printf("大端模式\n");
//	}
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	//char* p = (char*)&a;
//	//return *p;
//	return *(char*)&a;
//	
//}
//
//int main()
//{
//	//写一段代告诉我们当前机器的字节序是什么
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端模式\n");
//	}
//	else
//	{
//		printf("大端模式\n");
//	}
//
//}

//int main()
//{
//	char a = -1;
//	//1000 0000 0000 0000 0000 0000 0000 0001 原码
//	//1111 1111 1111 1111 1111 1111 1111 1110 反码
//	//1111 1111 1111 1111 1111 1111 1111 1111 补码
//	//由于char类型占一个字节        1111 1111 补码
//
//	signed char b = -1;
//	//1111 1111
//
//	unsigned char c = -1;
//	//0000 0000 0000 0000 0000 0000 1111 1111
//	printf("a=%d,b=%d,c=%d",a,b,c);//-1 -1 255
//	//由于%d是整型  不足的补符号位，无符号位补0
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	//1000 0000 0000 0000 0000 0000 1000 0000 原码
//	//1111 1111 1111 1111 1111 1111 0111 1111 反码
//	//1111 1111 1111 1111 1111 1111 1000 0000 补码
//	//由于char占一个字节  1000 0000
//	//补符号位1
//	//1111 1111 1111 1111 1111 1111 1000 0000补码
//
//	printf("%u",a);
//	//%d-打印十进制的有符号数字  %u-打印十进制无符号数字
//	//因为要输出无符号数字  所以原码反码补码一样，直接转换成数字
//	return 0;
//}

//int main()
//{
//
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n",i+j);
//	//按照补码的形式进行运算，随后格式化成为有符号的整数
//	
//	//10000000 00000000 00000000 00010100 原码
//	//11111111 11111111 11111111 11101011 反码
//	//11111111 11111111 11111111 11101100   -20补码
//	
//	//00000000 00000000 00000000 00001010   -10补码
//
//	//11111111 11111111 11111111 11110110    结果补码
//	//10000000 00000000 00000000 00001010    结果原码   -10
//	return 0;
//}

//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n",i);
//		Sleep(100);
//	}
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	//char只能放下-128—127的数
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//		//-1，-2，-3，...，-128,127,126，...，3,2,1,0，-1，-2，-3.....循环至总数为1000
//		//因为\0的ASCII是0，所以遇0结束
//		//-1...-128+127....1的个数=255
//	}
//	printf("%d",strlen(a));
//	return 0;
//}

int main()
{
	unsigned char i = 0;//0-255反复循环
	for (i = 0; i <= 255; i++)
	{
		printf("hello,world\n");
		//死循环
	}
	return 0;
}
