#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//  "/0" �ַ��������ı�־
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', 0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	return 0;
//}



// ����  1:�Զ��庯�� Add
//         2:�⺯��
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	sum = Add(a, b);
//	printf("sum = %d\n",sum);
//	
//	return 0;
//}


//if else���
//int main()
//{
//	int age = 0;
//	printf("������������䣺\n");
//	scanf("%d", &age);
//	if (age<18)
//	{
//		printf("δ���꣡");
//	}
//	else if (age>=18 && age<28)
//	{
//		printf("���꣡");
//	}
//	else if (age>=28 && age<50)
//	{
//		printf("���꣡");
//	}
//	else if (age>=50 && age<90)
//	{
//		printf("���꣡");
//	}
//	else
//	{
//		printf("�ϲ�����");
//	}
//	return 0;
//}



//100���ڵ�����
//int main()
//{
//
//	int i = 1;
//	while (i<=100)
//	{
//		if (i % 2 == 1)
//		{ 
//			printf(" %d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}



//switch case
//int main() 
//{
//	int day = 0;
//	int n = 1;
//	printf("�������������֣�\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("workday!!!!!\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekday������\n");
//		break;
//	default:
//		printf("��������������������롣\n");
//		break;
//	}
//	return 0;
//}
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++; 
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d,n = %d\n", m, n);
	return 0;
}