#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("��������������:<\n");
//	scanf("%s", password);//��������� �����password��
//	//��������һ�� '\n' ����������û��س�����һ��'\n'
//	//��Ҫһ��getchar��ȡ��
//	while ((ch = getchar())!= '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>\n");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}


//�žų˷���
//int main()
//{
//	int a = 0;
//	int j = 0;
//	for (int a = 1; a <= 9; a++) {
//		for (int j = 1; j <= a; j++) {
//
//			
//			printf("%d * %d = %d",j,a,j*a);
//			printf("   ");
//			//j + " * " + a + " = " + (j * a) + "\t"
//		}
//		printf("\n");
//
//	}
//	return 0;
//}



//do....while
//int main()
//{
//	
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d \n", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}


//n�Ľ׳�
//int main()
//{
//	int a = 1;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//			a = a * i;
//	}
//	printf("n�Ľ׳�=%d", a);
//	return 0;
//}



//n�Ľ׳��ۼ�
//int main()
//{
//	int a = 1;
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	//scanf("%d", &n);
//	for (n = 1;n<=10;n++)
//	{
//		a = 1;
//		for (i = 1; i <= n; i++)
//		{
//			a = a * i;
//		}
//		sum = sum + a;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}


//���ֲ���
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int size = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = size - 1;
	
	while (left <= right) 
	{
		int mid = (left + right) / 2;//�м�Ԫ���±�
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��� �±��ǣ�%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("�Ҳ���\n");
		}
	}
	return 0;
}