#define	 _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";//����
//	//"abc"---'a' 'b' 'c' '\0'---'0'�ַ����Ľ�����־
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", strlen(arr1));//strlen---�����ַ����ĳ���
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0):\n");
//	scanf("%d\n", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//int main()
//{
//	int line = 1;
//	printf("�������\n");
//	while (line < 20)
//	{
//		printf("�õĵ�%d�д���\n",line);
//		line++;
//	}
//	if(line>20)
//		printf("��offfer\n");
//	return 0;
//}
//�ӷ�������
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum = % d\n", sum);
//	return 0;
//}
//����ļ򵥽���
//int main()
//{
//	int arr[5] = {1,2,3,4,5,};//����һ������
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[4]);//���±�ķ�ʽ����Ԫ��
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	printf("%d\n", a);  
//	return 0;
// }
//void test()
//{
//	static int i = 1;//i�Ǿֲ���������{}�������������,i����static����һ����̬�ľֲ�������
// static ����ȫ�ֱ����ı��˱�����������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�
// ����Դ�ļ���û��ʹ����
//	i++;
//	printf("i = %d\n", i);
//}
//int main()
//{
//	int a = 0;
//	while (a < 5)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//��Ķ��壨����ͺ���������һ����
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a,b);
//	printf("max = %d\n", max);
//	return 0;
//}
//c���Եĺ���--ָ��
//һ���ڴ��ַ��1�ֽڣ�һ���ֽ���8����
//int main()
//{
//	int a = 10;//4���ֽ�
//	//&a;//ȡ��ַ
//	int* p = &a;
//	//*--�ǽ����ò�����
//	//��һ�ֱ���������ŵ�ַ��--ָ�����
//	printf("%p\n", a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';//����һ���ַ�������Ϊ�����洢�ռ�
//	char* pc = &ch;//ȡch�ĵ�ַ��ŵ�ָ�����pc��
//	*pc = 'a';//���ַ���a����ָ�����pc
//	printf("%c\n", ch);//��ʱ�����ch�����е� w ͨ��ָ���ַ�����ñ�� a
// printf("%d\n",sizeof(pc));//ָ��Ĵ�С�Ƕ����ֽڣ�ָ����ָ��ĵ�ַ�Ĵ�С���������йأ�32��λ��4�ֽڣ�64��8�ֽڣ�
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;//��ŵ�ַ�ı�����֮Ϊָ�������p��һ������--ָ�����,
//	//int*��һ�����ͣ���һ�����壩,int* p ��ʾp��һ��ָ�������pָ��Ķ�����int���ͣ�
//	// *--����˵�����ͣ�һ�����ţ���ʵ������
//	//printf("%p\n,p");
//	//*p, *--�ǽ����ò����������߼�ӷ��ʲ�������
//	*p = 20;
//	//��ʱ�� * ����ʵ������ģ���ʾ��ӷ��ʣ���һ�ֲ�����
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));//ָ�������ַ���͵Ĵ�С��ֻ�����32λ����СΪ4������64λ-��СΪ8 �й�ϵ��
//	*pd = 5.5;
//	printf("%lf\n",d);
//	return 0;
//}
//--�ṹ��--�Լ�������������ͣ������������Ӷ���
//����һ���ṹ������
//struct Book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵ı���
//	struct Book b1 = {"c���Գ������",55 };
//	struct Book* pb = &b1;
//	//����pb��ӡ�������ͼ۸�
//	//.   �ṹ�����.��Ա
//	// /*printf("������%s\n", b1.name);
//	//printf("�۸�%dԪ\n", b1.price);
//	
//	//->  �ṹ��ָ��->��Ա
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	/*printf("������%s\n", (*pb).name);
//	printf("�۸�%d\n", (*pb).price);*/
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
//	return 0;
//}

