#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
#include<windows.h>
#include<stdlib.h>
//int main(){
//	int i=0;
//	char password[20]={0};
//	for(i=0;i<3;i++)
//	{
//	
//	printf("请输入密码：");
//	scanf("%s",&password);
//	if(strcmp(password,"123456")==0)//  =不能用来比较两个字符串是否相等 应该使用一个库函数-strcmp
//		//如果两个字符串相等就会返回一个0   第一个大于第二个，返回大于0的数。第一个小于第二个，返回小于0的数。
//	{
//	printf("登录成功\n");
//	break;	
//	}
//	else printf("密码输入错误\n");
//	}
//	if(i==3)
//	{
//	printf("三次密码均错误 退出程序\n");
//	}
//return 0;}






















//int main()
//{
//	//welcome to bit!!!!!!
//	//####################
//	//w##################!
//	//we################!!
//	//wel##############!!!
//	//...
//	//welcome to bit!!!!!!
//	//char arr[]="abc";     //char后面默认会存在一个 \0
//	//[a b c \0]
//	// 0 1  2 3
//	char arr1[]="I LOVE YOU YINGYING!!!!!!!!!!!!!!";
//	char arr2[]="#################################";
//	int left=0;
//	//int right=sizeof(arr1)/sizeof(arr1[0])-2;//需要减去一个2才能得到最后一位下标
//	int right=strlen(arr1)-1;
//	while(left<=right)
//	{
//	arr2[left]=arr1[left];
//	arr2[right]=arr1[right];
//	printf("%s\n",arr2);
//	//休息一秒
//	Sleep(800);//需要#include<windows.h>
//	system("cls");//执行系统命令的一个函数-cls -清空屏幕  需要#include<stdlib.h>
//	left++;
//	right--;
//	}
//	printf("%s\n",arr2);
//return 0;
//}































//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int left=0;//左下标
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int right=sz-1;//右下标
//	int k=7;
//	
//	while(left<=right)
//	{
//	int mid=(left+right)/2;
//	if(arr[mid]>k)
//	{right=mid-1;}
//	else if(arr[mid]<k)
//	{left=mid+1;}
//	else{
//	printf("找到了，下标是%d\n",mid);
//	break;
//	}
//	}
//	if(left>right)//必须要加这个判断 如果没有  当找到时 break出来会执行printf("找不到");
//	{
//	printf("找不到\n");
//	}
//return 0;}
//











//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=13;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//	if(k==arr[i])
//		{printf("%d\n",i);
//	break;
//	}
//	
//	}
//	if(i==10)
//	printf("找不到\n");
//return 0;
//}











//int main()
//{
//int i=0;
//int n=0;
//int ret=1;
//int sum =0;
//for(n=1;n<=3;n++)
//{
//ret=1;//不能缺少   少了它计算出来1！+2！+3！错误  因为少了它ret值会是15
//for(i=1;i<=n;i++)
//{
//ret=ret*i;
//}
//sum=sum+ret;
//}
////当缺少循环内部 ret=1时
////ret=1*1
////ret=1*1*2
////ret=2*1*2*3
//printf("sum=%d\n",sum);
//return 0;}



//int main()
//{//计算10！和1！+2！+...+10!
//	int i=0;
//	int rep=1;
//	int add=0;
//	for (i=1;i<=10;i++)
//	{
//	rep=i*rep;
//	add=rep+add;	
//	}
//	printf("%d\n",rep);
//	printf("%d\n",add);
//return 0;
//}
//int main()
//{
//	int rep=1;
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//	rep=i*rep;
//	
//	
//	}
//	printf("%d",rep);
//
//return 0;}









//int main()
//{
//	int i=1;
//	do {
//		if(i==5)
//			continue;
//         //break;
//	printf("%d",i);
//	i++;}
//	while(i<=10);
//return 0;}






//int main()
//{
//int i=0;
//int k=0;
//for (i=0,k=0;k=0;i++,k++)
//	k++;
////循环0次
//
//return 0;}




//int main(){
//int x,y;
//for (x=0,y=0;x<2&&y<5;++x,y++)
//{
//
//printf("hehe\n");
////输出2个hehe
//
//}
//return 0;
//}


//int main()
//{
//	int i=0;
//	int j=0;
//	for (;i<10;i++)
//	{
//	for(;j<10;j++)
//	{
//	printf("hehe ");	
//	}//此处输出10个hehe
//	}
//return 0;}
















//int main()
//{
//	int j=0;
//	int i=0;
//	for (i=0;i<10;i++)
//	{
//	for(j=0;j<10;j++)
//	{
//	printf("hehe ");	
//	}//10*10=100
//	}
//return 0;}










//int main()
//{
//for(;;)
//{
//printf("hehe\n");//for循环的初始化、调整、判断都可以省略  
//				 //但是for循环的判断部分被省略，那判断条件：恒为真
//				//如果不是非常熟练，建议大家不要随意省略
//}
//return 0;}






//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//
//	//10次循环
//	//10次打印
//	//10个元素
//	for(i=0;i<10;i++)
//	{
//	printf("%d ",arr[i]);
//	}
//return 0;}
















//int main(){
//	int i=0;
//	for(i=0;i<10;i++){
//	if(i=5)
//	printf("haha\n");
//	}
//return 0;}








//int main(){
//	//初始化 判断 调整
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//			//break;
//			continue;
//	printf("%d\n",i);}
//return 0;}






//int main(){
//
//	int i=0;
//	while(i<10)
//	{
//	//.....
//	i++;
//	}
//return 0;}






//int main(){
//	int ch =0;
//	while((ch=getchar())!=EOF)
//	{
//	if(ch<'0'||ch>'9')
//		continue;
//	putchar(ch);
//	}
//return 0;}










//int main()
//{
//	int ch=0;
//	//EOF--end of file 文件结束标志    等于-1
//	//while ((ch=getchar())!= EOF)
//	//{
//	//putchar(ch);
//	//}
//	int ret=0;
//	char password[20]={0};
//	printf("请输入密码：");
//	scanf("%s",&password);//输入密码 并存放在password数组中
//	//缓冲区还剩余一个'\n'
//	//读取下一个'\n'
//	while((ch=getchar())!='\n'){
//	;
//	}
//	printf("请确认(Y/N)：");
//	ret=getchar();
//	if (ret=='Y')
//	{	printf("确认成功");
//	}
//	else
//		printf("放弃确认");
//return 0;}
