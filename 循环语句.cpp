#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入您的密码:<\n");
//	scanf("%s", password);//输入密码后 存放在password中
//	//缓冲区有一个 '\n' 输入密码后敲击回车产生一个'\n'
//	//需要一个getchar读取掉
//	while ((ch = getchar())!= '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>\n");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//九九乘法表
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


//n的阶乘
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
//	printf("n的阶乘=%d", a);
//	return 0;
//}



//n的阶乘累加
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


//二分查找
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int size = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = size - 1;
	
	while (left <= right) 
	{
		int mid = (left + right) / 2;//中间元素下标
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
			printf("找到了 下标是：%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到\n");
		}
	}
	return 0;
}