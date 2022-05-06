 #define _CRT_SECURE_NO_WARNINGS 1 

//#include<string.h>
//#include<stdio.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1字符串中追加一个str1字符串
//	//strcat       char *strcat(char *strDestination,const char *strSource);
//	//strncat	   char *strncat(char *strDest,const cgar *strSource,size_t count)
//	//strcat(str1,str1);//error  strcat不能自己给自己追加字符串  其中的\0会被替换  进而找不到\0
//	strncat(str1, str1, len1);//abcdefabcdef
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr-找子串的
//	char* ret=strstr(str1, str2);//在str1里找str2   如果找到  返回找到的字符地址   如果没找到   返回NULL
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//杨氏矩阵
//有一个数组矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//
//
//	//返回型参数
//	int ret = FindNum(arr, k, &x, &y);//通过传入地址  使得函数成立时，能把数值改变
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("坐标:[%d][%d]\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}




//1.计数器的方法
//2.递归
//3.指针-指针
//#include <assert.h>
//#include<stdio.h>

////1.计数器的方法
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

////递归
//int my_strlen(const char *str)
//{
//	if (*str != '\0')
//	{
//		return (my_strlen(str + 1) + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}



//int main()
//{
//	int len = my_strlen("abcdef");//6
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };//随机值
//	//int len = strlen(arr);
//	printf("%d\n", len);
//		//	3     -6   =   -3
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");//最终输出hehe  是由于strlen返回的是size_t  即unsigned int
//	}
//	else
//	{
//		printf("haha\n");
//	}
//}



//#include<assert.h>
//#include<stdio.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;//把\0赋值到*dest上去
//
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	//char *arr1 = "abcdefghi";//错误的示范  指针指向的是常量字符串  不能修改  要注意
//	char arr2[] = "bit";
//	//char arr2[] = { 'b', 'i', 't' };//错误的示范
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}




//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	//assert(dest!=NULL);
//	//assert(src);
//
//	//1.找到目的字符串'\0'
//	while (*dest = '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";//目的地空间必须足够大
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}







//int main()
//{
//	//vs2013
//	//  >   1
//	//  ==  0
//	//  <  -1
//
//	//linux-gcc
//	//>   >0
//	//==   0
//	//<   <0
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	//int ret = strcmp(p1, p2);//一个字符一个字符比较  a<s  所以直接返回负值
//	if (strcmp(p1,p2) > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1=p2\n");
//	}
//	else if(strcmp(p1, p2) < 0)
//	{
//		printf("p1<p2\n");
//	}
//	//printf("%d\n",ret);
//
//	return 0;
//}



//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1=='\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}



//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//空间不足  也在强行放入
//	return 0;
//}



int main()
{
	char arr1[10] = "abcdefgh";
	char arr2[] = "bit";
	strncpy(arr1, arr2, 6);//将hell拷贝到arr1    有多少数字 放多少字符  如果数字比字符大  补\0
	return 0;
}



//int main()
//{
//	char arr1[30] = "hello\0xxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);//hellowor   从\0开始替换   追加上会补上\0   数字比字符大时也只是把world\0放完即止
//	printf("%s\n", arr1);
//
//
//
//	return 0;
//}
