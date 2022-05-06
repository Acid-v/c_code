#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//未初始化的指针变量
//	int* p;//局部变量不初始化，里面默认放的是随机值
//	*p=20;
//
//	return 0;
//}

//数组越界导致的野指针问题
//int main()
//{
//	int a[10]={0};
//	int i=0;
//	int* p=a;
//	for(i=0;i<=12;i++)
//	{
//	//*p=i;
//	//p++;
//	*p++=i;
//	//当指针指向的范围超过数组arr的范围时，p就是野指针
//	}
//	return 0;
//}



//int* test()
//{
//int a=10;
//return &a;
//
//}
//int main()
//{
//	int* p=test();
//	printf("%d\n",*p);
//
//return 0;}

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int* p=arr;
//	for(i=0;i<sz;i++)
//	{
//	printf("%d ",*p);
//	p=p+1;
//	
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",&arr[9]-&arr[0]);
//	printf("%d\n",&arr[9]);
//	printf("%d\n",&arr[0]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start=str;
//	char* end=str;
//	while(*end!='\0')
//	{
//	end++;
//	}
//	return end-start;
//}
//
//int main()
//{
////strlen  -求字符串长度
////递归-模拟实现了strlen-计数器的方式1   递归的方式2
//
//	char arr[]="bit";
//	int len=my_strlen(arr);
//	printf("%d",len);
//
//	return 0;
//}


//int main()
//{
//	int arr[10]={0};
//	printf("%p\n",arr);//首元素的地址
//	printf("%p\n",arr+1);
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr[0]+1);
//	printf("%p\n",&arr);
//	printf("%p\n",&arr+1);
//	//1.&数组名--数组名不是首元素的地址--数组名表示整个数组--&数组名  取出的是整个数组的地址
//	//2.sizeof(arr) --sizeof(数组名) --数组名表示的整个数组--sizeof(数组名)计算的是整个数组的大小
//
//	return 0;
//}

//int main()
//{
//	int arr[10]={0};
//	int* p=arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=i;
//	}
//
//	for(i=0;i<10;i++)
//	{
//	
//	printf("%d ",*(p+i));
//	}
//	//for(i=0;i<10;i++)
//	//{
//	//printf("%p====%p\n",p+i,&arr[i]);
//	//}
//	return 0;
//}


//int main()
//{
//	int a=10;
//	int* pa=&a;
//	int** ppa=&pa;//ppa就是二级指针
//	int*** pppa=&ppa;
//	**ppa=20;
//	printf("%d\n",**ppa);
//	return 0;
//}


//指针数组---数组
//数组指针---指针

//int main()
//{
//	int a=10;
//	int b=20;
//	int c=30;
//	int* pa=&a;
//	int* pb=&b;
//	int* pc=&c;
//	//整型数组  --存放整型
//	//字符数组  --存放字符
//	//指针数组  --存放指针
//	int arr[10];
//	int* arr2[3]={&a,&b,&c};//指针数组
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//	printf("%d ",*(arr2[i]));
//	}
//	return 0;
//}

//void Init(int arr[],int sz)
//{
//	int i=0;
//    for(i=0;i<sz;i++)
//	{
//		arr[i]=0;
//	}
//}
//
//void Print(int arr[],int sz)
//{
//	int i=0;
//    for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//
//void Reverse(int arr[],int sz)
//{
//	int left=0;
//	int right=sz-1;
//		while(left<right)
//		{
//			int tmp=arr[left];
//			arr[left]=arr[right];
//			arr[right]=tmp;
//			left++;
//			right--;
//		}
//}
//
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//Init(arr,sz);
//	Print(arr,sz);
//	Reverse(arr,sz);
//	Print(arr,sz);
//	return 0;
//}


//int main()
//{
//	int arr1[]={1,3,5,7,9};
//	int arr2[]={2,4,6,8,0};
//	int tmp=0;
//	int i=0;
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0;i<sz;i++)
//	{
//		tmp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=tmp;
//	}
//
//}

//描述一个学生   一些数据
//名字
//年龄
//电话
//性别

//struct 结构体关键字   Stu--结构体标签     struct Stu--结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	Stu s1={"张三",20,"17693608288","男"};//局部变量
//	struct Stu s2={"旺财",45,"17263474757","女"};
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[]="hello bit\n";
//	struct T t={"hehe",{100,'w',"hello,world",3.14},arr};
//	printf("%s\n",t.ch);//hehe
//	printf("%s\n",t.s.arr);//hello world
//	printf("%lf\n",t.s.d);//3.14
//	printf("%s\n",t.pc);//hello bit
//	return 0;
//}



//打印
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu s)
//{
//	printf("name:%s\n",s.name);
//	printf("age:%d\n",s.age);
//	printf("tele:%s\n",s.tele);
//	printf("sex:%s\n",s.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name:%s\n",ps->name);
//	printf("age:%d\n",ps->age);
//	printf("tele:%s\n",ps->tele);
//	printf("sex:%s\n",ps->sex);
//
//}
//
//
//int main()
//{
//	Stu s={"李四",40,"17698608288","男"};
//	//打印结构体数据
//	//首选Print2
//  //函数传参的时候，参数需要圧栈，如果传递一个结构体对象的时候，结构体过大，参数圧栈的系统开销比较大，会导致性能的下降
//	//结构体传参的时候，要传结构体的地址
//	Print1(s);
//	Print2(&s);
//	return 0;
//}


//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//
//
//int main()
//{
//	int a=10;
//	int b=20;
//	int ret=0;
//	ret=Add(a,b);
//	return 0;
//} 
