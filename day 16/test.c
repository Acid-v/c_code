#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,67,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//
//	}
//	system("pause");
//	return 0;
//}

//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;   //'\0'
//}

//void my_strcpy(char* dest, char* src)
//{
//
//		while (*dest++ = *src++)
//		{
//			;
//		}
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL&&src != NULL)
//	{
//		while (*dest++=*src++)
//		{
//			;
//		}
//	}
//}

//#include<assert.h>
//char* my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//		while (*dest++ = *src++)
//		{
//			;
//		}
//		return ret;
//}
//
//int main()
//{
//	//strcup
//	//字符串拷贝
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	printf("%s\n",my_strcpy(arr1,arr2));
//	return 0;
//}



//int main()
//{
//	const int num = 10;
//	int* const p = &num;
//  //const int* p=&num;
//	//comst 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p（num）的值
//	//const 放在指针变量*的右边时，修饰的是指针变量p本身，p不能被改变了
//
//	*p = 20;
//	int n = 100;
//	//p = &n;
//	printf("%d\n",num);
//	return 0;
//}

#include<assert.h>
int my_strlen(const char* str)
{
	int count=0;
	assert(str!=NULL);//保证指针的有效性
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}
