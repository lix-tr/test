#define	 _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��֧��� (���� if ���� switch ���)
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else
//		printf("����\n");
//	return 0;
//}
// ����һ�£�������ʽΪ�棬�����ִ��
// c��������0��ʾ�٣�����һ�з�0��ʾ��
//��{ } ��������ʾ�����
//int main()
//{
//	int a = 0;
//	printf("������һ����\n");
//	scanf("%d", &a);
//	if (a % 2 == 1){
//		printf("����������");
//	}
//	else
//		printf("������ż��");
//	return 0;
//}
//���100���ڵ�����
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
//������X�����������switch���
//switch( )�жϣ�case��ʾ��ڣ��﷨-- case ֵ(���ͳ������ʽ) ��Ҫ�������
//int main()
//{
//	int day = 0;
//	scanf("%d\n",&day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;//break���ж�Ȼ������switch���
//	//......
//	}
//}
////switch-case ��������ؼ��֣�case,break,default;
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//ע�⣺scanf("  ")�в�����printf( )�����ʹ�� \n���У������ӡ������
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("��Ϣ��\n");
//		break;
//	case 6:
//	case 7:
//		printf("������\n");
//		break;
//	default://default����switch{ }��ͷ���߽�βû������
//		printf("�������\n");
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
//	case 3://û������breakһֱ����˳������ִ�У�����break������ǰ��switch{ }���
//		switch (n)
//		{//switch ��Ƕ��
//		case 1:n++;
//		case 2:m++, n++;//m = 4,n = 3
//			break;//������ǰ���С��switch{ }��䣬Ȼ���������ִ��
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d", m, n);// m = 5,n = 3;
//	return 0;
//}
//ѭ�����(�������֣�while��for,do while)
//whileѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//break;//i=5ʱֱ������ѭ����breakֱ������ѭ��
//			continue;//����continue��������ߵĴ��룬Ȼ���ͷ��ʼ��ִ�У���ֹѭ���б���ѭ������Ĵ��룬ֱ����ת��ѭ�����жϲ��֣�
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//EOF-end of file ��ֵΪ-1
//	while (ch=getchar() != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
