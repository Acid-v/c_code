 #define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>


//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000001001-补码
//	float* pFloat = (float*)&n;
//	printf("n的值为:%d\n", n);//9
//	printf("pFloat的值为:%f\n", *pFloat);//0.000000
//	//(-1)^0 * 0.00000000000000000001001 * 2^-126
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//(-1)^0 * 1.001 *2^3
//	//0 10000010 00100000000000000000000,注意e要加127
//	printf("n的值为:%d\n", n);
//	//当成补码来算  1091567616
//	printf("pFloat的值为:%f\n", *pFloat);//9.0
//	return 0;
//}

//int main()
//{
//	float  f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0*1.011*2^2
//	//S=0;
//	//M=1.011
//	//E=2
//	//0 10000001 01100000000000000000000
//	//0x40b00000
//	//(-1)^0 * 1.011 * 2^2
//	//
//
//	//0 00000000 01100000000000000000000
//	//E+127=0
//	//规定E全0表示 无穷小  省略的1不计  阶数加一
//	//+/- 0.011 * 2^-126
//	 
//	//0 11111111 01100000000000000000000
//	//E+127=255
//	//E=128;
//	//+/-  1.xxx * 2^128
//	//表示的正负无穷大的数字
//	return 0;
//}

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//指向首元素地址的指针大小除以首元素大小  指针有4/8个字节  所以sz等于1/2
//	printf("%d\n",sz);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n",arr);
//	printf("%s\n",pc);
////%s是字符串 %c是字符
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	//"abcdef"是一个常量字符串   放到指针p时是首元素地址
//	printf("%c\n",*p);//p解引用就是字符a
//	printf("%s\n",p);//根据指针p的内容指向的地址，把字符串打印下来
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串  常量字符串不能改
//	//*p = 'w';
//	printf("%s\n",p);
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";
//	char* p1 = "abcdef";//指针->常量字符串
//	char *p2 = "abcdef";//指针->常量字符串
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}

//指针数组 是数组，用来存放指针的
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针的数组--指针数组
//  char* pch[5];//存放字符指针的数组--指针数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ",*(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针--指针

//int main()
//{
//	//int *p = NULL;//p是整型指针  -指向整型的指针  --可以存放整型的地址
//	//char* pc = NULL;//pc是字符指针  --指向字符的指针  --可以存放字符的地址
//					//数组指针  --指向数组的指针  --存放数组的地址
//	//int arr[10] = { 0 };
//	//arr --首元素地址
//	//&arr[0] --首元素的地址
//	//&arr  --数组的地址
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10]=&arr;//数组的地址要存起来
//	//上面的p就是数组指针
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	int arr2[10] = { 10 };
//	int (*pa2)[10]=&arr2;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int  *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	//int (*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ",*(*pa+i));//*pa=arr
//	//}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ",(*pa)[i]);
//	//}
//	return 0;
//}

////参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			printf("%d", *(p[i] + j));
//			printf("%d ", *(*(p + i) + j));//p+i 找到那一行地址 解引用就会把第一行数组拿到
//			//printf("%d ",(*(p+i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5);//arr --数组名 --除了sizeof和&数组名，数组名就是首元素地址
//	print2(arr, 3, 5);//arr 指向首元素地址  为一行 +1会跳到下一行
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",p[i]);
//		printf("%d ",*(p+i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//arr[i]== *(arr+i) == *(p+i) == p[i]
//	}
//
//	return 0;
//}

