 #define _CRT_SECURE_NO_WARNINGS 1 

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a= 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
////传值
//void printf1(struct S tmp)
//{
//	printf("%d\n", tmp.a);
//	printf("%c\n", tmp.c);
//	printf("%lf\n", tmp.d);
//}
//
////传地址
//void printf2(const struct S* ps)
//{
//	printf("%d\n", ps->a);
//	printf("%c\n", ps->c);
//	printf("%lf\n", ps->d);
//}
//
//int main()
//{
//	struct S s;
//	Init(&s);
//	printf1(s);
//	printf2(&s);
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;
//	printf("%d\n", s.a);*/
//	return 0;
//}




//#include<stdio.h>

////位段  -二进制位  不是单纯的累加     位段就是为了节省空间
//

//struct S
//{
//	//int  开辟一个32位空间 依次放入a,b,c   然而d放不下  只能重新开辟一个int空间   得出8个字节
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节
//	return 0;
//}




//struct S
//{
//	char a : 3;  //取三位 010
//	char b : 4; //取四位 0100
//	//a和b累加为7个bit  一个字节即可存储  空位补0 由右向左补齐  即00100010  
//	char c : 5; //取五位 00011
//	//由于d和c累加超过8个bit  c只能由1个字节存储 00000011
//	char d : 4; //取四位 0100
//	//占1个字节  00000100
//
//	//00100010 00000011 00000100
//	//   2 2     0 3      0 4
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10; //1010
//	s.b = 20; //10100
//	s.c = 3; //11
//	s.d = 4;//100
//	return 0;
//}


////枚举类型
//enum Sex
//{
//	//枚举的可能取值  -常量
//	MALE = 2,
//	FEMALE = 4,
//	SECRET = 8
//};
//
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;
//	printf("%d %d %d", RED, GREEN, BLUE);
//	printf("%d %d %d", MALE, FEMALE, SECRET);
//	return 0;
//}



//联合-联合体--共用体  公用同一块空间

////结构体里面的多个成员  是各自独立的
//struct S
//{};

////枚举里面不是成员，而是可能取值
//enum Em
//{};

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//}


int check_sys()
{
	//int a = 1;
	//return *(char*)&a;

	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
		printf("大端\n");
	return 0;
}


//int main()
//{
//	int a = 0x11223344;
//
//	//低地址--------->高地址
//	//[11][22][33][44]  高字节的内容放在低地址   大端字节序存储模式
//	//[44][33][22][11]  低字节的内容放在低地址   小端字节序存储模式
//	return 0;
//
//}
