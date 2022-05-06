 #define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>


//int main()
//{
//	//strncmp  -字符串比较   int strncmp(const char* string1,const char* string2,size_t count);
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2,3);//比较前三个字符
//	printf("%d\n", ret);
//
//	return 0;
//}



////strstr  查找字符串  如果找到  返回所查找的字符串首个字符的地址
//#include<assert.h>
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = NULL;
//	char *s2 = NULL;
//	char *cur = p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//
//int main()
//{
//	char *p1 = "abbcdef";
//	char *p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//defabcdef
//	}
//	return 0;
//}




//int main()
//{
//	//192.168.31.121
//	//192 168 31 121   -strtok
//	//zpw@bitedu.tech
//	//zpw bitedu tech
//
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//	//strtok(arr,p);
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char*ret = strtok(arr, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL,p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}



//#include<errno.h>
//int main()
//{
//	//错误码  错误信息
//	//0     No error
//	//1     Operateion not permitted
//	//2     No such file ir directory
//	// ......
//	//errno 是一个全局错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}


//#include<ctype.h>
//int main()
//{
//	//char ch = "2";
//	////int ret = islower(ch);//遇到小写字母输入非0数值  遇到非小写字母  输出0
//	//int ret = isdigit(ch);//判断是否是数组字符  是  输出非0  不是  输出0
//	//printf("%d\n", ret);
//
//	//char ch = tolower('Q');//将大写字符转为小写字符
//	//putchar(ch);
//	//char ch = toupper('q');//将小写字符转为大写字符
//	//putchar(ch);
//
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//}

//#include<assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};

//void *my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//C语言标准
//memcpy 只是处理不重叠的内存拷贝就可以
//memmove 处理重叠内存的拷贝

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { { "张三", 20 }, { "李四", 30 } };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//memcpy(arr2, arr1, sizeof(arr1));
//	//char* dest,const char* src
//	//strcpy(arr1, arr2);//error  由于strcpy需要接收char*  而它收到了int*   由于char*解引用是一个字节  所以会错误
//	return 0;
//}


//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//
//int main()
//{
//	//int arr1[] = { 1, 2, 3, 4, 5 };
//	//int arr2[10] = { 0 };
//	//arr1中的数组拷贝到arr2中
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//	             //1  2  1  2  3  4  5  8  9  10
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	my_memmove(arr3 + 2, arr3, 20);
//
//	//my_memmove不能胜任重叠拷贝的
//	//my_memcpy(arr3 + 2, arr3, 20);
//
//	//memmove可以胜任内存的重叠拷贝
//	//	memmove(arr3 + 2, arr3, 20);
//	//C语言标准说：memcpy函数可以靠别不重叠的就可以了
//	//当下发现：VS2013环境下的memcpy可以重叠拷贝
//	//memcpy(arr3 + 2, arr3, arr3, 20);
//	//memcpy(arr3 + 2, arr3, 20);
//	return 0;
//}



//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00 ...
//	//01 00 00 00 02 00 00 00 05 00 00 00 ...
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int ret = memcmp(arr1, arr2, 9);  //-1    比较内存数据的大小
//	printf("%d\n", ret);
//	return 0;
//}


////memset--内存设置
//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	//40字节
//	//01 01 01 01 01 01 01 01 01 00 00 00 00...
//	memset(arr, 1, 10);
//	return 0;
//}



////声明一个结构体类型
////声明一个学生类型，是想通过学生类型来创建学生变量(对象)
////描述学生：属性-名字+电话+性别+年龄
//struct Stu   // struct结构体关键字  Stu结构体标签
//{
//	//成员变量
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;//年龄
//}s4, s5, s6;//全局变量
//
//struct Stu s3;//全局变量
//
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;//局部变量
//	struct Stu s2;//局部变量
//
//	return 0;
//}



////结构体的自引用
//struct Node
//{
//	int date;//4
//	struct Node* next;//4/8
//};
//
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}




//typedef struct Node
//{
//	int data;//4
//	struct Node* next;//4/8
//
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}




//struct T
//{
//	double weight;
//	short age;
//
//};
//
//struct S
//{
//
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s = { 'c', 100, 3.14, "hello bit" };
//	struct S s = { 'c', {34.2,28}, 100, 3.14, "hello bit" };
//	//printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%d\n", s.st.age);
//	return 0;
//}




//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof( s1 ));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof( s2 ));//8
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof( s3 ));//16
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof( s4 ));//32
//	return 0;
//}



////设置默认对其数位4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8 
//  //size   12
//};
//#pragma pack()
////取消设置的默认对其数

////设置默认对其数位1
//#pragma pack(1)
//struct S
//{
//	char c1;//1
//	
//	double d;//8  
//	//size   9
//};
//#pragma pack()
////取消设置的默认对其数
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}


#include<stddef.h>
struct S
{
	char c;
	int i;
	double d;
};
 
int main()
{
	//offsetof();    相对于起始位置的偏移量
	printf("%d\n", offsetof(struct S, c));//0
	printf("%d\n", offsetof(struct S, i));//4
	printf("%d\n", offsetof(struct S, d));//8
	return 0;
}
