#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int ch=0;
//	//ctrl + z
//	//EOF  -end of file    -->  -1
//	while((ch=getchar()) !=EOF)
//	{
//	putchar(ch);
//	}
//	//int ch=getchar();
//	//putchar(ch);
//	//printf("%c\n",ch);
//	return 0;
//}


//int main()
//{
//int i=1;
//while(i<=10)
//{
//	i++;
//	if(i==5)
//	continue;//continue会直接跳回上面判断条件
//	//break;
//printf("%d ",i);
//}
//return 0;
//}


//int main()
//{
//	while(1)
//	printf("hehe");
//	int i=1;
//	while(i<=10)
//	{
//	printf("%d ",i);
//	i++;
//	}
//	return 0;
//}



//int main(){
//int n=1;
//int m=2;
//switch(n)
//{
//case 1: m++;
//case 2: n++;
//case 3:
//	switch(n)
//	{
//	case 1:n++;
//	case 2:m++;n++;break;
//	}
//case 4:m++;
//default:
//		break;
//}
//printf("m=%d,n=%d\n",m,n);
//return 0;
//}




//int main(){
//	int day;
//	scanf("%d",&day);
//	switch(day){
//	case 1:
//		printf("你好");
//		break;
//	case 2:
//		printf("我的宝贝");
//		break;
//	default:
//		printf("who are you?");
//		break;
//
//	}
//
//return 0;
//}











//int main()
//{int i=1;
//while(i<=100){
//	if(i%2==0)
//		printf("%d\n",i);
//i++;
//}
//return 0;
//}


//int main(){
//	int a;
//scanf("%d",&a);
//if(a%2==0)
//	printf("偶数");
//else
//	printf("奇数");
//return 0;
//}



//int main(){
//int num=4;
//if(5==num)
//{
//	printf("hehe");// =赋值语句 ==判断语句
//}
////if(num=5)
////{
////	printf("hehe");// =赋值语句 ==判断语句
////}
//return 0;
//}







//int main(){
//	int age=20;
//	if (age<18)
//		printf("未成年\n");
//	else if(age>=18&&age<=28)
//		printf("成年\n");
//	else
//		printf("老头\n");
//	/*if (age<18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//*/
//return 0;
//}


//
//int main(){
//char ch='w';
//char* pc=&ch;
//*pc='a';
//printf("%d\n",sizeof(pc));
//printf("%c\n",ch);
//printf("%c\n",* pc);
//return 0;
//}




//int main(){
//int a=10;//4个字节
//int* p=&a;//取地址
//printf("%p\n",&a);
//printf("%p\n",p);
//*p=20;//* -解引用操作符   找到*p所指位置 将里面的内容改成20
//printf("%d",a);
////有一种变量是用来存放地址的指针变量
////printf("%p\n",&a);
//return 0;
//}





//结构体
//char int double....
//人=3.14
//'w'
//书 --复杂对象
//名字+身高+年龄+身份号码......
//书名+作者+出版社+定价+书号....
//复杂对象 ---结构体  -我们自己创造的一种类型
//
//创建一个结构体类型
//struct Book
//{
//char name[20];//C语言程序设计
//short price;//55
//};//   ; 不可缺少  用于结束
//int main(){
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1={"C语言程序设计",55};
//	struct Book* pb=&b1;
//	//利用pb打印出我的书名和价格
//	printf("%s\n",pb->name);//pb 所指b1的name
//	printf("%d\n",pb->price);//pb 所指b1的price
//	//  .    结构体变量。成员
//	//  ->   结构体指针->成员
//	/*printf("%s\n",(*pb).name);
//	printf("%d\n",(*pb).price);
//*/
//	//printf("书名：%s\n",b1.name);
//	//printf("价格：%d\n",b1.price);
//	//b1.price=15;
//	//printf("b1修改后的价格为%d",b1.price);//price是变量 而name是数组名  修改书名 不能这么修改   要通过strcpy来修改 
//	//strcpy(b1.name,"C++") //stringcpy=string copy --字符串拷贝--库函数--string.h  #include<string.h>
//	return 0;
//
//}




//int main(){
//	printf("%d\n",sizeof(char*));
//	printf("%d\n",sizeof(short*));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(double*));
//	//double d=3.14;
//	//double* pd=&d;
//	//printf("%d\n",sizeof(pd));
//	//*pd=5.5;
//	//printf("%lf\n",d);
////int a=10;//申请了4个字节空间
//////printf("%p\n",&a);
////int* p=&a;// p是一个变量 --指针变量
//////printf("%p\n",p);
////*p=20;//解引用操作符 --或者叫  间接访问操作符
////printf("%d\n",a);
//return 0;
//}
