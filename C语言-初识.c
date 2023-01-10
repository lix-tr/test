#define	 _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";//数组
//	//"abc"---'a' 'b' 'c' '\0'---'0'字符串的结束标志
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", strlen(arr1));//strlen---计算字符串的长度
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
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0):\n");
//	scanf("%d\n", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//int main()
//{
//	int line = 1;
//	printf("加入比特\n");
//	while (line < 20)
//	{
//		printf("敲的第%d行代码\n",line);
//		line++;
//	}
//	if(line>20)
//		printf("好offfer\n");
//	return 0;
//}
//加法函数体
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
//数组的简单介绍
//int main()
//{
//	int arr[5] = {1,2,3,4,5,};//定义一个数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[4]);//用下标的方式访问元素
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	printf("%d\n", a);  
//	return 0;
// }
//void test()
//{
//	static int i = 1;//i是局部变量，出{}后结束生命周期,i加上static后是一个静态的局部变量了
// static 修饰全局变量改变了变量的作用域-让静态的全局变量只能在自己所在的源文件内部使用，
// 出了源文件就没法使用了
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
//宏的定义（与求和函数的作用一样）
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a,b);
//	printf("max = %d\n", max);
//	return 0;
//}
//c语言的核心--指针
//一个内存地址是1字节，一个字节是8比特
//int main()
//{
//	int a = 10;//4个字节
//	//&a;//取地址
//	int* p = &a;
//	//*--是解引用操作符
//	//有一种变量用来存放地址的--指针变量
//	printf("%p\n", a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';//定义一个字符变量并为开创存储空间
//	char* pc = &ch;//取ch的地址存放到指针变量pc中
//	*pc = 'a';//将字符串a赋予指针变量pc
//	printf("%c\n", ch);//此时输出后ch变量中的 w 通过指针地址的作用变成 a
// printf("%d\n",sizeof(pc));//指针的大小是多少字节（指针所指向的地址的大小，与计算机有关，32二位是4字节，64是8字节）
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;//存放地址的变量称之为指针变量，p是一个变量--指针变量,
//	//int*是一种类型（是一个整体）,int* p 表示p是一种指针变量，p指向的对象是int类型，
//	// *--用于说明类型，一个符号，无实际意义
//	//printf("%p\n,p");
//	//*p, *--是解引用操作符（或者间接访问操作符）
//	*p = 20;
//	//此时的 * 是有实际意义的，表示间接访问，是一种操作符
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));//指针变量地址类型的大小（只与电脑32位—大小为4，还是64位-大小为8 有关系）
//	*pd = 5.5;
//	printf("%lf\n",d);
//	return 0;
//}
//--结构体--自己创造出来的类型，用于描述复杂对象
//创建一个结构体类型
//struct Book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};
//int main()
//{
//	//利用结构体类型创造一个该类型的变量
//	struct Book b1 = {"c语言程序设计",55 };
//	struct Book* pb = &b1;
//	//利用pb打印出书名和价格
//	//.   结构体变量.成员
//	// /*printf("书名：%s\n", b1.name);
//	//printf("价格：%d元\n", b1.price);
//	
//	//->  结构体指针->成员
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	/*printf("书名：%s\n", (*pb).name);
//	printf("价格：%d\n", (*pb).price);*/
//	b1.price = 15;
//	printf("修改后的价格：%d元\n", b1.price);
//	return 0;
//}

