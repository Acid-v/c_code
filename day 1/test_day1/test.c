
////����һ��stdio.h���ļ�
////std-��׼  standard input output
//
//int main(){
//	//δ�����ı�ʶ��
//	//���� extern �ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//
//	return 0;
//}
//
//int global = 2020;
//void test()
//{
//	printf("test()--%d\n", global);
//}
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}
//
//
//
//
//
//int main()
//{
//	//�ֲ�������������
//	{ int num = 0;
//	printf("num=%d\n", num);
//	}
//	return 0;
//}
//
//
//
//
//int main()
//{
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf
//	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}









//int a = 100;
//int main()
//{
//	int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
//	//���ֲ�������ȫ�ֱ���������ͬʱ���ֲ���������
//	printf("%d\n", a);
//	return 0;
//}

//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨 {} ��֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ���飨 {} ��֮�ڵı���
//
//
//	return 0;
//}

//int main()
//{
//
//	short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 95.6f;//���ڴ�����4���ֽڣ����С��
//}

//	
//int main(){
//	printf("%d\n",sizeof(char));  //1
//	printf("%d\n",sizeof(short)); //2
//	printf("%d\n",sizeof(int));  //4
//	printf("%d\n",sizeof(long)); //4
//	printf("%d\n",sizeof(long long));  //8
//	printf("%d\n",sizeof(float)); //4
//	printf("%d\n",sizeof(double)); //8
//	return 0;
//}



//char--�ַ����� 
//%d-��ӡ����
//%c-��ӡ�ַ�
//%f-��ӡ��������--��ӡС��
//%p-�Ե�ַ��ʽ��ӡ
//%x-��ӡ16��������
//int main()
//{
//char ch='A'; //�ڴ�
// printf("%c\n",ch);//%c--��ӡ�ַ���ʽ������
//	int age=20;
//	printf("%d\n",age);//%d--��ӡ����ʮ��������
//	float f=5.0;
//	printf("%f\n",f);
//	double d=3.14;
//	printf("%lf\n",d);
//	return 0;
//}
//20
//50.5
//int �����͵���˼


//mainǰ���int��ʾmain��������֮�󷵻�һ������ֵ
//void main()����д���ǹ�ʱ��

//int main() //������-��������-main�������ҽ���һ��
//{
//
//
//	    //�����������
//		//����Ļ�����hello world
//		//���� - printf function - priintf--��ӡ����
//		//�⺯�� - C���Ա����ṩ������ʹ�õĺ���
//		//���˵Ķ��� - Ҫ���к�
//		//include
//	printf("hello world!\n");
//	return 0;//����0
//
//
//}
