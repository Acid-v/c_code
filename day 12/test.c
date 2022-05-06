#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	short s=0;
//	int a=10;
//	printf("%d\n",sizeof(s=a+5));//2
//	printf("%d\n",s);//0  sizeof不参与运算
//	//int a=0;
//	//char b='w';
//	//int arr[10]={0};
//
//	//printf("%d\n",sizeof(a));
//	//printf("%d\n",sizeof(int));
//
//	//printf("%d\n",sizeof(b));
//	//printf("%d\n",sizeof(char));
//
//	//printf("%d\n",sizeof(arr));
//	//printf("%d\n",sizeof(int [10]));
//
//
//	return 0;
//}

//int main()
//{
//	int a=11;
//	a=a|(1<<2);
//	printf("%d\n",a);
//	a=a&(~(1<<2));
//	printf("%d\n",a);
//	//0000 0000 0000 0000 0000 0000 0000 1011
//	//0000 0000 0000 0000 0000 0000 0000 0100
//	//1<<2
//	//0000 0000 0000 0000 0000 0000 0000 1111
//
//	//0000 0000 0000 0000 0000 0000 0000 1111
//	//1111 1111 1111 1111 1111 1111 1111 1011
//	//0000 0000 0000 0000 0000 0000 0000 0100
//	//0000 0000 0000 0000 0000 0000 0000 1011
//
//
//	//int a=0;
//	//// ~按二进制位取反
//	////0000 0000 0000 0000 0000 0000 0000 0000
//	////1111 1111 1111 1111 1111 1111 1111 1111    ----0按位取反后得到的补码
//	////1111 1111 1111 1111 1111 1111 1111 1110	 ----反码
//	////1000 0000 0000 0000 0000 0000 0000 0001	 ----原码
//	////-1
//	//printf("%d\n",~a);
//
//
//return 0;}


//int main()
//{
//	int a=10;
//	//printf("%d\n",++a);//前置++，先++，后使用
//	printf("%d\n",a++);//后置++，先使用，后++
//	return 0;
//}



//void test1(int arr[])
//{
//printf("%d\n",sizeof(arr));
//}
//void test2(char ch[])
//{
//printf("%d\n",sizeof(ch));
//}
//int main()
//{
//	int arr[10]={0};
//	char ch[10]={0};
//	printf("%d\n",sizeof(arr));//40
//	printf("%d\n",sizeof(ch));//10
//	test1(arr);//4或8   函数用指针取得arr的地址
//	test2(ch);//4或8	函数用指针取得ch的地址
//	return 0;
//}


//int main()
//{
//
//
//
//
//
//
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a=10;
//	//使用struct Stu 这个类型创建了一个学生对象s1,并初始化
//	struct Stu s1={"张三",20,"17338209150344"};
//	struct Stu* ps=&s1;
//
//	printf("%s\n",ps->name);
//	printf("%d\n",ps->age);
//	//printf("%s\n",(*ps).name);
//	//printf("%d\n",(*ps).age);
//	//printf("%s\n",s1.name);
//	//printf("%d\n",s1.age);
//	//printf("%s\n",s1.id);
//	return 0;
//}


//int main()
//{
//	char a=3;
//	//0000 0000 0000 0000 0000 0000 0000 0011
//	//因为char占1个字节 取后八位  0000 0011
//	char b=127;
//	//0000 0000 0000 0000 0000 0000 0111 1111
//	//因为char占1个字节 取后八位  0111 1111
//	char c=a+b;
//	//a和b如何相加
//	//char是算上符号位  相加的话  高位补上符号位  补成8个字节  运算后  然后取最后1个字节
//	//0000 0000 0000 0000 0000 0000 0000 0011
//	//0000 0000 0000 0000 0000 0000 0111 1111
//	//0000 0000 0000 0000 0000 0000 1000 0010
//
//	//1000 0010--c
//	//1111 1111 1111 1111 1111 1111 1000 0010-补码
//	//1000 0000 0000 0000 0000 0000 0111 1110-原码
//	printf("%d\n",c);
//	return 0;
//}


//整体提升
//int main()
//{
//	char c=1;
//	printf("%u\n",sizeof(c));//1
//	printf("%u\n",sizeof(+c));//4
//	printf("%u\n",sizeof(!c));//4
//	return 0;
//}


//int main()
//{
//	//printf("%d\n",sizeof(char*));
//	//printf("%d\n",sizeof(short*));
//	//printf("%d\n",sizeof(int*));
//	//printf("%d\n",sizeof(double*));
//	
//	int a=0x11223344;
//	//int* pa=&a;
//	//*pa=0;
//	char* pc=&a;
//	*pc=0;
//	//printf("%p\n,pa);
//	//printf("%p\n,pc);
//
//return 0;
//}


//int main()
//{
//	int a=0x11223344;
//	int* pa=&a;
//	char* pc=&a;
//	printf("%p\n",pa);
//	printf("%p\n",pa+1);
//
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//
//
//
//return 0;}



int main()
{
	int arr[10]={0};
	//int* p=arr;//数组名-首地址的地址
	int i=0;
	for(i=0;i<10;i++)
	{
	*(p+i)=1;
	
	}

return 0;
}
