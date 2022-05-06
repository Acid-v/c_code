#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
//int main()
//{	char input[20]={0};
//	//shutdown -s -t 60
//	//system()-执行系统命令的
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)//比较两个字符串-strcmp()
//	{
//	system("shutdown -a");
//
//	}
//	else
//	{goto again;
//	}
//
//return 0;
//}

int main()
{	char input[20]={0};
	//shutdown -s -t 60
	//system()-执行系统命令的
	system("shutdown -s -t 60");
	while(1){
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
	scanf("%s",input);
	if(strcmp(input,"我是猪")==0)//比较两个字符串-strcmp()
	{
	system("shutdown -a");
	break;
	}
	}
return 0;
}











////goto语句
//int main()
//{
//printf("hello bit\n");
//goto again;
//printf("你好\n");
//again:
//printf("hehe\n");
//return 0;
//}


















//void menu()
//{
//printf("******************************\n");
//printf("****   1.play   0.exit    ****\n");
//printf("******************************\n");
//
//}
//
//void game()
//{
//	//1、生成一个随机数
//	int ret=0;
//	int guess=0;//接受猜的数字
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//time_t
//	
//	ret=rand()%100+1;//生成1-100的随机值
//	//printf("%d\n",ret);
//	//printf("猜数字\n");
//	//2、猜数字
//	while(1)
//	{
//	printf("请猜数字:>");
//	scanf("%d",&guess);
//	if(guess>ret)
//	{printf("猜大了\n");}
//	else if(guess<ret)
//	{printf("猜小了\n");}
//	else
//	{printf("恭喜你，猜对了\n");
//	break;}
//	}
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));
//	do{
//	menu();
//	printf("请选择>:");
//	scanf("%d",&input);
//	switch(input)
//	{
//	case 1:
//		game();//猜数游戏
//		break;
//	case 0:
//		printf("退出游戏\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//
//	}while (input);
//	return 0;
//}















//int main()
//{int i=0;
//int count=1;
//int m;//c语言要注意把int放在前头
//srand((unsigned)time(NULL));//为了使下次运行能够把随机值进行改变
//m=rand()%100;//产生0-100的随机值
//printf("请输入数字：");
//scanf("%d",&i);
//
//while(i!=m)
//{
//	if(i>m)
//	{
//	printf("猜大了 请输入数字：");
//	scanf("%d",&i);
//	count++;
//	}
//	else
//	{
//	printf("猜小了 请输入数字：");
//	scanf("%d",&i);
//	count++;
//	}
//
//}
//	printf("你第%d次猜对了 你真聪明！！\n",count);
//
//return 0;}

















//int main(){
////九九乘法表
//int m=0;
//int n=0;
//int sum=0;
//for(m=1;m<=9;m++)
//{
//	for(n=1;n<=m;n++)
//	{	sum=m*n;
//		printf("%d*%d=%-2d ",m,n,sum);//%-2d为默认两位左对齐 不够加空格    %2d为默认两位右对齐  不够加空格
//	}
//	printf("\n");
//
//
//}
//return 0;
//}














//int main()
//{
//	int arr[]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int i=0;
//	int max=arr[0];
//	for(i=1;i<10;i++)
//	{
//	if(max<arr[i])
//		max=arr[i];
//	
//	
//	}
//	printf("%d\n",max);
//
//
//return 0;}
















////计算1/1-1/2+1/3-1/4+......-1/100的总和
//int main(){
//int i=0;
//double m;
//double sum=0;
//int flag=1;
//for(i=1;i<=100;i++)
//{
//m=1.0/i;
//sum=sum+flag*m;
//flag=-flag;
//
//
//}
//printf("%f",sum);
//
//return 0;
//}





















//// 计算1-100之前9的个数
//int main()
//{
//int i=0;
//int count=0;
//for(i=1;i<=100;i++)
//{
//if(i%10==9)
//	count++;
//if(i/10==9)
//	count++;
//
//
//}
//
//printf("count的值为：%d\n",count);
//
//
//return 0;}

























//int main()
//{
//	int count=0;
//	//sqr--开平方的数学库函数
//	int i=0;
//	for(i=101;i<=200;i+=2)//偶数不可能是素数
//	{
//	//判断i是否为素数
//	//素数判断的规则
//	//1、试除法
//	//产生2->i-1
//	int j=0;
//	for(j=2;j<=sqrt(i);j++)
//	{
//	if(i%j==0)
//	{break;}
//	}
//	if(j>sqrt(i))
//	{count++;
//	printf("%d\n",i);
//	}
//	}
//	printf("count值：%d\n",count);
//return 0;}















//int main()
//{
//	int count=0;
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//	//判断i是否为素数
//	//素数判断的规则
//	//1、试除法
//	//产生2->i-1
//	int j=0;
//	for(j=2;j<i;j++)
//	{
//	if(i%j==0)
//	{break;}
//	}
//	if(j==i)
//	{count++;
//	printf("%d\n",i);
//	}
//	}
//	printf("count值：%d\n",count);
//return 0;}



















//int main(){
//	int count=0;
//	int year=0;
//	for(year=1000;year<=2000;year++)
//	{
//		//判断year是否为闰年
//		//1、能被4整除并且不能被100整除是闰年
//		//2、能被400整除
//		if(year%4==0&&year%100!=0)
//		{printf("%d\n",year);
//		count++;}
//		else if(year%400==0)
//			{printf("%d\n",year);
//			count++;}
//	}
//	printf("\ncount值为：%d\n",count);
//	return 0;}











////求最大公约数
//int main()
//{
//	int r=0;
//	int m=0;
//	int n=0;
//	scanf("%d%d",&m,&n);
//	while(r=m%n)//无需考虑m、n谁大    会自动调整 
//	{
//	//r=m%n;
//	m=n;
//	n=r;
//	
//	}
//	printf("%d\n",n);
//return 0;}



























//打印1-100之间3 的倍数的数字
//int main()
//{	int i=0;
//	for(i=1;i<=100;i++)
//	{
//	if(i%3==0)
//		printf("%d\n",i);
//	
//	}
//
//
//return 0;
//}


//依次由大到小输出三个数字
//int main()
//{
//int a=0;
//int b=0;
//int c=0;
//scanf("%d%d%d",&a,&b,&c);
//while(a<b){
//if(a<b)
//{int tmp;
//tmp=a;
//a=b;
//b=tmp;
//}
//if(b<c)
//{
//int mid;
//mid=b;
//b=c;
//c=mid;
//}
//}
//
//printf("由大到小依次是：%d %d %d",a,b,c);
//return 0;}
