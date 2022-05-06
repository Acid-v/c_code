 #define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
//int main()
//{
	////二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16  a[0]相当于第一行作为一维数组的数组名，
	////sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小

	//printf("%d\n", sizeof(a[0] + 1));//4/8 -- a[0]是第一行的数组名，数组名此时时首元素的地址，a[0]其实就是第一行第一个元素的地址
	////所以a[0]+1就是第一行第二个元素的地址  --地址大小是4/8个字节

	//printf("%d\n", sizeof(*(a[0] + 1)));//4  *(a[0]+1)是第一行第二个元素，大小是4个字节
	//printf("%d\n", sizeof(a + 1));// 4/8  a是二维数组的数组名，没有sizeof(a),也没用&(a),所以a是首元素的地址
	////而把二维数组看成一维数组时，二维数组的首元素是它的第一行，a就是第一行(首元素)的地址
	////a+1就是第二行的地址

	//printf("%d\n", sizeof(*(a + 1)));//16  sizeof(a[1])  计算第二行的大小，单位是字节
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  第二行的地址
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 计算的是第二行的大小，单位是字节
	//printf("%d\n", sizeof(*a));//16  a是首元素的地址--第一行的地址，*a就是第一行，sizeof(*a)就是计算第一行的大小
	//printf("%d\n", sizeof(a[3]));//16    不会去直接访问a[3]  只是会去判断类型 a[3]和a[0]是一个类型，访问的是一行数据



	//char* p = "abcdef";

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值  不同于上一个随时值
	//printf("%d\n", strlen(&p[0] + 1));//5

	//printf("%d\n", sizeof(p));//4/8  --计算指针变量的地址
	//printf("%d\n", sizeof(p + 1));//4/8  p+1得到的是字符b的地址
	//printf("%d\n", sizeof(*p));//1  *p就是字符串的第一个字符--'a'
	//printf("%d\n", sizeof(p[0]));//1  int arr[10];  arr[0]==*(arr+0)  p[0]==*(p+0)=='a'
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8  取出的是b的地址




	////char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//char arr[] = "abcdef";
	//
	//printf("%d\n", strlen(arr));//  6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err  首元素地址解引用是字符a，ASCII为97，非法访问内存
	////printf("%d\n", strlen(arr[1]));//err  第二个字符地址解引用是字符b，ASCII为98，非法访问内存
	//printf("%d\n", strlen(&arr));// 6  会有警告，&arr--数组地址--数组指针  char(*p)[7]=&arr,而strlen 里面规定的是const char*
	//printf("%d\n", strlen(&arr + 1));// 随机值    也会有警告   &arr+1是跳过整个数组后的地址，但也是数组地址
	//printf("%d\n", strlen(&arr[0] + 1));//  5  



	//printf("%d\n", sizeof(arr));//  7 sizeof(arr)计算的数组的大小，单位是字节
	//printf("%d\n", sizeof(arr + 0));//4/8   计算的是地址的大小，arr+0是首元素的地址
	//printf("%d\n", sizeof(*arr));//1  *arr 是首元素的大小，sizeof(*arr)计算首元素的大小
	//printf("%d\n", sizeof(arr[1]));//1  arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
	//printf("%d\n", sizeof(&arr));// 4/8  &arr虽然是数组的地址，但也是地址，所以是4/8个字节
	//printf("%d\n", sizeof(&arr + 1));// 4/8&arr+1是跳过整个数组后的地址，但也是地址
	//printf("%d\n", sizeof(&arr[0] + 1));//  4/8  &arr[0]+1第二个元素的地址

//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);//&a+1指向的是5后面的地址，还是数组指针类型，但是数组指针类型不能存放在整型指针里，
//	                           //所以要强制转换成(int *)
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2  5    
//	//a指向的是首元素的地址，a+1就是第二个地址，解引用就是2  //整型指针-1就是指向上一个地址，解引用就是5
//	return 0;
//}



//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//
//}* p;
//
////假设p的值为0x100000  如下表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20字节
//int main()
//{
//	//指针+整数  取决于指针类型
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x00100014跳过一个结构体 20化成16进制为14
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001无符号长整型  整型加1就是加1
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004无符号整型指针
//	return 0;
//}


////题型较难
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//%x  打印16进制    4   2000000
//	//小端存储模式  010000000 02000000 03000000 04000000
//	//ptr1指向的是4后面的地址  ptr[-1]是*(ptr+(-1))的意思 即*(ptr1-1)  由于强制转换成int指针类型 -1即为向前挪动4个字节，指向4的地址
//	//a指向的是首元素1的地址，将地址整型化后+1就是往后挪1个字节，然后解引用是取四个字节 即小端表示  16进制为0x00000002
//	                          //拿出来要从高地址到低地址依次取字节  16进制为0x02000000
//	return 0;
//}



//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式  取逗号后面的值   二维数组即 1 3 5 0 0 0  这里的括号要区别于{}
//	int *p;
//	p = a[0];
//	printf("%d",p[0]);//1   p[0]=*(p+0)  
//	return 0;
//}



//int main()
//{
//	int a[5][5];
//	int(*p)[4];//数组指针
//	p = a;//int (*)[4]----int (*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//fffffffc -4             p[4][2]=*(*(p+4)+2)
//	//%p打印地址 地址16进制无符号  %d有符号
//	return 0;
//}
