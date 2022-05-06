 #define _CRT_SECURE_NO_WARNINGS 1 
 #include<stdio.h>

//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char*  p = &ch;
//	const char *p2 = "abcdef";//
//	//指针数组 -数组 -存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针  指向数组
//	//int *p3;//整型指针 -指向整型的指针
//	//char* p4;//字符指针 -指向字符的
//	int arr2[5];//数组
//	int (*pa)[5] = &arr2;//取出数组的地址,pa就是一个数组指针
//	int(*parr3[10])[5];
//	return 0;
//}


//二维数组传参 行可以省略 列不能省略
//二维数组传进去的是数组首元素的地址   即第一行数组的地址
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void test2(int arr[3][])//err
////{}
////void test2(int arr[][])//err
////{}
////void test3(int* arr)//err
////{}
////void test4(int **arr)//err
////{}
//void test5(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//二维数组传参
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//
//	return 0;
//}


//一级指针传参
//void test1(int* p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);//ok
//	test(p1);//ok
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}

//二级指针传参
//void test(int** ptr)
//{
//	printf("num=%d\n",**ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//二级指针传参
//void tett(int **p)
//{}
//int main()
//{
//	int *ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];//	
//	test(arr);//指针数组也可以
//	return 0;
//}

//数组指针 -是指向数组的指针
//函数指针 -是指向函数的指针  --存放函数地址的一个指针


//函数指针的使用
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	//&arr;
//	//arr;
//	//printf("%d\n", Add(a, b));
//	//&函数名和函数名都是函数的地址
//
//	//printf("%p\n",&Add);
//	//printf("%p\n", Add);
//
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));//5
//	printf("%d\n", (pa)(2, 3));//5
////	printf("%d\n", *pa(2, 3));//error
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p)(char*)=Print;
//	(*p)("hello bit");
//	return 0;
//}

////signal是一个函数声明
////signal函数的参数有两个，一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
////signal函数的返回类型也是一个函数指针；该函数指针指向的函数的参数是int，返回类型是void
//void(*                   signal(int, void(*)(int))                         )(int);//第一种表示
//
////简化方式--重命名
////typedef void(*)(int)    pfun_t;//错误示范
//typedef void(*pfun_t)(int);//正确示范，要把重命名的名称放入里面  格式要规范
//pfun_t signal(int, pfun_t);//等同于第一种表示



////函数指针数组
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址--函数指针的数组
//	int (*pa)(int,int) = Add;//Sub//Mul//Div
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));   //函数指针 解引用的 *可以省略
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*,const char*) = my_strcpy;
////2.写一个函数指针数组，pfArr，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*) = { my_strcpy, my_strcpy, my_strcpy, my_strcpy };



//计算器


void menu()
{
	printf("**********************\n");
	printf("***  1.add  2.sub  ***\n");
	printf("***  3.mul  4.div  ***\n");
	printf("***  5.xor  0.exit ***\n");
	printf("**********************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr是一个函数指针数组 --转移表
//	int(*pfArr[])(int,int) = {0,Add,Sub,Mul,Div,Xor};
//	do{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d",&x,&y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n",ret);
//		}
//		else if (input == 1)
//		{
//			printf("退出\n");
//		}
//		else
//			printf("选择错误\n");
//	} while (input);
//}



//void Calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//
//}
//int main()
//{
//	int input = 0;
//
//
//	do{
//		menu();
//		printf("请选择:>");
//		scanf("%d",&input);
//		switch (input)
//		{
//			case 1:
//				Calc(Add);
//				break;
//			case 2:
//				Calc(Sub);
//				break;
//			case 3:
//				Calc(Mul);
//				break;
//			case 4:
//				Calc(Div);
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//			default:
//				printf("选择错误\n");
//				break;
//		}
//	} while (input);
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//pfArr是一个数组--函数指针的数组
//
//	//ppfArr是一个指向【函数指针数组】的指针
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr 是一个数组指针，指针指向的数组有四个元素
//	//指向的数组的每个元素的类型是一个函数指针  int(*)(int,int)
//
//	return 0;
//}





//void print(char *str)
//{
//	printf("hehe:%s",str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

void 	BubbleSort(int arr[], int sz)
{
	//....
}
//qsort  ---可以排序任意类型的数据
int main()
{
	//冒泡排序函数
	//冒泡排序函数只能排序整形数组
	int arr[] = {1,3,4,7,9,2,4,6,8,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}
