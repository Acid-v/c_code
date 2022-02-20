#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main(){
//	int arr[10] = { 0 }; //10个整型元素的数组
//	//10*sizeof(int)=40;
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	//计算数组的元素个数
//	//个数=数组总大小/每个元素的大小
//
//	//int a=10;
//	//sizeof 计算的是变量/类型所占空间大小，单位是字节
//	//printf("%d\n",sizeof(a));//4
//	//printf("%d\n",sizeof(int));
//	//printf("%d\n",sizeof a);//变量a  可以省掉括号
//	//printf("%d\n",sizeof int);//  执行错误 int不能省掉括号
//	return 0;
//}






//单目操作符
//双目操作符-----两边各有操作数
//三目操作符
//int main(){
//	//int a=10;
//	//int b=20;
//	//a+b;//+ 双目操作符
//
//
//	int a=10;
//	//int a = -2;
//	int b = -a;
//	int c = +3;//正号都会省略
//	printf("%d\n", a);
//	printf("%d\n", !a);
//
//	//0-假
//	//非0-真
//	return 0;
//}






//int main(){
//	int a = 10;
//	a = 20;//=赋值 ==判断相等  
//	a = a + 10;//1
//	a += 10;//2
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//复合赋值符
//	//+= -= *= /= %= >>= <<= &= |= ^=
//
//
//	return 0;
//}


//int main()
//{
//	//(二进制)位操作
//	// & 按位与
//	// | 按位或
//	// ^按位异或   异或----对应二进制位相同，则为0。对应二进制位不同，则为1。 
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	int d = a | b;
//	int e = a^b;
//	//a  011  3  
//	//b  101  5
//	//c  001  1
//	//d  111  7
//	//e  110  6
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//
//	return 0;
//}








//int main(){
//	//移位(二进制)操作符
//	// << 左移
//	// >> 右移
//	int a = 1;
//	//整数1占4个字节----32bit
//	//0000 0000 0000 0000 0000 0000 0000 0001
//	int b = a << 2;//a左移两位  变成4
//	printf("%d\n", b);
//	return 0;
//}









//int main()
//{
//	int a = 5 / 2;//取模
//	printf("%d\n", a);
//	return 0;
//}







//int main()
//{
//	//int a=1;
//	//int b=2;
//	//int c=3;
//	//int d=4;
//	int i = 0;
//
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//定义一个存放10个整数数字的数组
//	while (i < 10)
//	{
//
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[4]);// 输出值为5  下标的方式访问元素
//
//	char ch[20];
//	float arr2[5];
//
//
//	return 0;
//}







//int add(int x, int y){
//	int z = x + y;
//	return z;
//}
//
//int main(){
//	int num1 = 10;
//	int num2 = 20;
//	int sum1 = 0;
//	int sum2 = 0;
//	int a = 100;
//	int b = 200;
//	//sum=num1+num2;
//	sum1 = add(num1, num2);
//	//sum=a+b;
//	sum2 = add(a, b);
//	printf("sum=%d\n", sum1);
//	printf("sum=%d\n", sum2);
//	return 0;
//}

//函数
//f(x)=2*x+1;
//f(x,y)=x+y;

#include<stdio.h>
//#include<string.h>

//int main(){
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 2000)
//	{
//		printf("敲一行代码%d\n", line);
//		line++;
//	}
//	if (line >= 2000)
//		printf("好offer\n");
//	return 0;
//}






//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1) //一个等号相当于赋值 两个等号相当于比较等式两边是否相等
//		printf("你一定会上岸的\n");
//	if (input == 0)
//		printf("你迟早会后悔的\n");
//	return 0;
//}


//int main()
//{
//	printf("%c\n",'\x61');//16进制-》97  ASCII对应为a
//	//  \ddd   ddd表示1~3个8进制的数字。如：\120 ……
//	//  \xdd   dd表示2个16进制的数字。  如：\x30  ……
//	char str[]="\32";
//	printf("%s\n",str);
//	printf("%c", '\32');
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	printf("%c\n", '\132');
//
//	//  \132是3个8进制的数字
//	//	132作为8进制代表的十进制数字，作为ASCII码值对应的字符
//	//	132 ---- > 10进制 = 1 * 8 ^ 2 + 3 * 8 ^ 1 + 2 * 8 ^ 0 = 90->作为ASCII代表的字符  代表为Z
//	//	\32是2个8进制的数字
//	//	32作为8进制代表的十进制数字，作为ASCII码值对应的字符
//	//	32 ---- > 10进制 26->作为ASCII代表的字符  此处为方格  直播中为箭头
//
//
//		return 0;
//}





//int main(){
//	printf("c:\\test\\32\\test.c\n");
//	printf("%s\n", "\"");
//	printf("%c\n", '\'');
//	//  \t --水平制表符
//	return 0;
//}

//int main(){
//	printf("abc\n");
//	printf("abcn");
//	return 0;
//}





//int main(){
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//	printf("%d\n", strlen(arr1));//strlen -string length --计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	//sizeof  会计算\0
//	//strlen  到\0停止 不遇到\0不停止  不计算\0
//
//	return 0;
//}











//int main(){
//	//数据在计算机上存储的时候，存储的是2进制
//	//a - 97
//	//A - 65
//	// .....
//	//ASCII 编码
//	//ASCII 码值
//	char arr1[] = "abc";//数组
//	//"abc"----'a' 'b' 'c' '\0' ---'\0'字符串的结束标志
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//	char arr3[] = { 'a', 'b', 'c' };
//	//'\0' -  0
//	//'a' 'b' 'c'
//	printf("%s\n", arr1);
//	//printf("%d",sizeof(arr1));
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}






//int main(){
//	//int float
//	//char
//	"abcdef";
//	"hello bit";
//	"";//空字符串
//
//
//return 0;}














//4、枚举常量
//枚举：一一列举

//性别：男 、女、 保密
//三原色：红、黄、蓝
//星期：1、2、3、4、5、6、7

//enum Color{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main(){
//	enum Color color = BLUE;
//	color = YELLOW;
//	//BLUE=6;  //error
//	printf("%d\n", color);
//
//	return 0;
//}

//枚举关键字--enum

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//
//};
////MALE FAMALE SECRET--枚举常量
//int main(){
//	//enum Sex s=FEMALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n",FEMALE);//1
//	printf("%d\n",SECRET);//2
//
//return 0;}



////3、#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };//类似于int a=0；
//	printf("%d\n", MAX);
//	return 0;
//}





//int main()
//{	//const -常属性
//	const int n=10; //n是变量 但是又有常属性，所以我们说n是常变量
//	//int arr[n]={0};
//	n=20;
////2、const修饰的常变量
//const int num=4;
//printf("%d\n",num);
//num=8;
//printf("%d\n",num);
//1、字面常量
//3;
//100;
//3.14;

//
//return 0;}
