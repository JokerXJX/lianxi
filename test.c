#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d%d", &y, &m) != EOF)
//	{
//		int day = days[m - 1];
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			if (m == 2)
//				day += 1;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (scanf("%d", &i) != EOF)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			printf("*\n", j);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <=i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = n; i >=1; i--)
//		{
//			int j = 0;
//			for (j = i; j >=1; j--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n - i - 1; j++)
			{
				printf(" ");
			}
			for (j = 0; j <= i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}