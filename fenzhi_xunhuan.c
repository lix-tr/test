#define	 _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//分支语句 (包含 if 语句和 switch 语句)
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else
//		printf("老年\n");
//	return 0;
//}
// 解释一下：如果表达式为真，则语句执行
// c语言中用0表示假，其他一切非0表示真
//用{ } 阔起来表示代码块
//int main()
//{
//	int a = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &a);
//	if (a % 2 == 1){
//		printf("该数是奇数");
//	}
//	else
//		printf("该数是偶数");
//	return 0;
//}
//输出100以内的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i%2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//用星期X的输出，引入switch语句
//switch( )判断；case表示入口，语法-- case 值(整型常量表达式) ：要输出内容
//int main()
//{
//	int day = 0;
//	scanf("%d\n",&day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;//break是中断然后跳出switch语句
//	//......
//	}
//}
////switch-case 语句三个关键字：case,break,default;
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//注意：scanf("  ")中不能像printf( )中随便使用 \n换行，否则打印不出来
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("休息日\n");
//		break;
//	case 6:
//	case 7:
//		printf("工作日\n");
//		break;
//	default://default放在switch{ }的头或者结尾没有区别
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;//m = 3
//	case 2:n++;//n = 2
//	case 3://没有遇到break一直按照顺序向下执行，遇到break跳出当前的switch{ }语句
//		switch (n)
//		{//switch 的嵌套
//		case 1:n++;
//		case 2:m++, n++;//m = 4,n = 3
//			break;//跳出当前这个小的switch{ }语句，然后继续向下执行
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d", m, n);// m = 5,n = 3;
//	return 0;
//}
//循环语句(包含三种：while，for,do while)
//while循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//break;//i=5时直接跳出循环，break直接跳出循环
//			continue;//遇到continue则跳过后边的代码，然后从头开始再执行（终止循环中本次循环后面的代码，直接跳转到循环的判断部分）
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//EOF-end of file 其值为-1
//	while (ch=getchar() != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
