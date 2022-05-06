#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算二进制位1的个数

//int count_bit_one(unsigned int n)
//{
//	int count=0;
//	while(n)
//	{
//		if(n%2==1)
//		{
//		count++;
//		}
//	n=n/2;
//	}
//	return count;
//}

//int count_bit_one(int n)
//{
//	int count=0;
//	int i=0;
//	for(i=0;i<32;i++)
//	{
//		if(((n>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit_one(int n)
//{
//	int count=0;
//	while(n)
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
////n=n&(n-1)
////n
////13
////1101  n
////1100  n-1
////1100  n
////1011  n-1
////1000  n
////0111  n-1
////0000  n
//
//int main()
//{
//	int count=0;
//	int a=0;
//	scanf("%d",&a);
//	//写一个函数求a的二进制(补码)表示中有几个1
//	count=count_bit_one(a);
//	printf("count=%d\n",count);
//	return 0;
//}

//// 求两个数 二进制位不同的位数
//int get_diff_bit(int m,int n)
//{
//	int count=0;
//	int tmp=m^n;
//	//return count_bit_one(tmp);
//	while(tmp)//用于计算二进制1的个数
//	{
//		tmp=tmp&(tmp-1);
//		count++;
//	
//	}
//	return count;
//}
//int main()
//{
//	int count;
//	int m=0;
//	int n=0;
//	scanf("%d%d",&m,&n);
//	count=get_diff_bit(m,n);
//	printf("count=%d\n",count);
//	return 0;
//}

//void print(int m)
//{
//
//	int i=0;
//	printf("奇数位:\n");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//
//	printf("偶数位:\n");
//	for(i=31;i>=1;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int m=0;
//	scanf("%d",&m);
//	print(m);
//	return 0;
//}


////依次打印数组的每一个值  用指针形式
//void print(int* p,int sz)
//{
//int i=0;
//for(i=0;i<sz;i++)
//	{
//		printf("%d",*(p+i));
//	}
//}
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//实现：将参数字符串中的字符反向排列
//要求：不能使用c函数库中的字符串操作函数

//int my_strlen(char* str)
//{
//	int count=0;
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	int left=0;
//	int right=my_strlen(arr)-1;
//	while(left<right)
//	{
//	int tmp=arr[left];
//	arr[left]=arr[right];
//	arr[right]=tmp;
//	left++;
//	right--;
//	}
//}

//void reverse_string(char arr[])
//{
//	char tmp=arr[0];
//	int len=my_strlen(arr);
//	arr[0]=arr[len-1];
//	arr[len-1]='\0';
//	if(my_strlen(arr+1)>=2)
//	{reverse_string(arr+1);}
//	arr[len-1]=tmp;
//
//}
//
//int main()
//{
//	char arr[]="abcdef";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}

int DigitSum(unsigned int num)
{
	if(num>9)
	{
		return DigitSum(num/10)+num%10;
	}
else
	{
		return num;
	}
}


int main()
{
	int ret=0;
	unsigned int num=0;
	scanf("%d",&num);
	ret=DigitSum(num);
	printf("ret=%d\n",ret);

return 0;
}
