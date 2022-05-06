 #define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>


//int main()
//{
//	////关于指针的一些等价代换的内容
//	//int arr[10] = { 1, 2, 3, 4, 5 };
//	//int* p = arr;
//	////*(p+2)==p[2]=*(arr+2)==arr[2]
//	//arr[2];//==>*(arr+2)
//
//
//
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int*)(&aa + 1);
//	int *ptr2 = (int*)(*(aa + 1));//二维数组首元素是第一行的地址 
//	//aa+1指向的是第二行的地址，第二行的地址解引用  相当于aa[1]，它表示首元素的地址即6的地址
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10  5
//	return 0;
//}



//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);//at   pa++  跳过一个char *    *pa指向at的地址
//	return 0;
//}


//int  main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//
//	printf("%s\n",**++cpp);//POINT
//	printf("%s\n", *--*++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}


//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6   12
//
//	return 0;
//}



//#include<string.h>
//#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);//确保指针有效性
//
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s",arr);//abcdef---->fedcba
//	gets(arr);//读取一行
//	//逆序函数
//	reverse(arr);
//
//	printf("逆序后的字符串:%s\n", arr);
//	return 0;
//}



////a+aa+aaa+.....
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//
//	printf("%d", sum);
//	return 0;
//}



////0---100000之间的自幂数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//	//判断i是否为水仙花数(自幂数)
//	//1.计算i的位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//	//2.计算i的每一位n次方之和  sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//	//3.比较i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

////喝汽水，1瓶汽水1元，两个空瓶可以换一瓶汽水，给20元，可以多少汽水
////
//int main()
//{ 
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n",total);
//	return 0;
//}






//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////1.从左边开始找一个偶数
////2.从右边开始找一个奇数
////3.交换
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从左边找偶数
//		while ((left<right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从右边找奇数
//		while ((left<right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//
//
//	return 0;
//}




//int main()
//{
//	char str1[] = "hello bit .";
//	char str2[] = "hello bit .";
//	char *str3 = "hello bit .";
//	char *str4 = "hello bit .";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");//
//	else
//		printf("str1 and str2 are not same\n");
//
//	return 0;
//}





//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	//5 4 3 2 1
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));// 4  1
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1 6
//	return 0;
//
//}


//题目要求
//实现一个函数，可以左旋字符串中的k个字符
//例如:
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
//旋转字符串


#include<string.h>
#include<assert.h>
//
////1.暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋一个字符
//		//1
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		*(arr + len - 1) = tmp;
//	}
//
//}

//2.三部翻转法
//ab cdef
//ba fedc     左边逆序+右边逆序
//cdefab       整体逆序

//void reverse(char* left,char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//
//}
//
//int is_left_move(char* s1, char* s2)
//{
//	int i = 0;
//	int len = strlen(s1);
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);//每次都会改变s1的顺序
//		int ret = strcmp(s1, s2);//strcmp  字符串相等 返回0
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";//不能用char* arr1来替代  因为char* arr1="abcdef",后面是常量字符串 不能改 
//	char arr2[] = "cdefab";//不能用char* arr2来替代  因为char* arr1="cdefab",后面是常量字符串 不能改 
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//}


//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s", arr);
//	return 0;
//}
