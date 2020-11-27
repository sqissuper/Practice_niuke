#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <ctype.h>


//计算CHN
//int main()
//{
//	char str[8000];
//	scanf("%s\n", str);//CCHNCHN
//	char* pc = str;
//	int c = 0, ch = 0, chn = 0;
//	while (*pc)
//	{
//		if (*pc == 'C')
//		{
//			c++;
//		}
//		else if (*pc == 'H')
//		{
//			ch+=c;
//		}
//		else if (*pc == 'N')
//		{
//			chn += ch;
//		}
//		pc++;
//	}
//	printf("%d\n", chn);
//	return 0;
//}

//0 1 1 2 3 5 8 13 21
//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	int f0 = 0, f1 = 1, f2;
//	int count = 0;
//	while (1)
//	{
//		f2 = f0 + f1;
//		if (f2 > n)
//		{
//			if (f2 - n > n - f1)
//			{
//				printf("%d\n", f2 - n);
//			}
//			else
//			{
//				printf("%d\n", n - f2);
//			}
//			break;
//		}
//		f0 = f1;
//		f1 = f2;
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	while (scanf("%d%d\n", &a, &b) != EOF)
//	{
//		if (a == b)
//		{
//			printf("%d=%d\n", a, b);
//		}
//		else if (a>b)
//		{
//			printf("%d>%d\n", a, b);
//		}
//		else{
//			printf("%d<%d\n", a, b);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int t = 0;
//	while (scanf("%d\n", &t) != EOF)
//	{
//		if (t > 0)
//		{
//			printf("1");
//		}
//		else if (t == 0)
//		{
//			printf("0.5");
//		}
//		else{
//			printf("0");
//		}
//	}
//	return 0;
//}
 
//判断三角形
//int main()
//{
//	int a, b, c;
//	while (scanf("%d%d%d\n", &a, &b, &c) != EOF)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b || a == c || b == c)
//			{
//				if (a == b && a == c && b == c)
//				{
//					printf("Equilateral triangle!");
//				}
//				else
//				{
//					printf("Isosceles triangle!");
//				}
//				
//			}
//			else
//			{
//				printf("Ordinary triangle!");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!");
//		}
//	}
//	return 0;
//}

//计算一元一次方程
//int swap(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	double a, b, c, x1, x2;
//	while (scanf("%lf%lf%lf\n", &a, &b, &c) != EOF)
//	{
//		double △ = (b * b) - (4 * a * c);
//		double Real = (-b) / (2 * a);
//		double Imag = (sqrt(-△)) / (2 * a);
//		if (a == 0)
//		{
//			printf("Not quadratic equation");
//		}
//		else
//		{
//			if (△ == 0)
//			{
//				x1 = x2 = Real;
//				printf("x1=x2=%.2lf\n", Real);
//			}
//			else if (△ > 0)
//			{
//				x1 = (-b + sqrt(△)) / (2 * a);
//				x2 = (-b - sqrt(△)) / (2 * a);
//				if (x1 > x2)
//				{
//					swap(x1, x2);
//				}
//				printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
//			}
//			else
//			{
//				x1 = Real - Imag;
//				x2 = Real + Imag;
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", Real,Imag,Real,Imag);
//			}
//		}
//	}
//	return 0;
//}

//获得月份天数
//int main()
//{
//	int year, month;
//	int aLeapYear[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int LeapYear[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while (scanf("%d%d\n", &year, &month) != EOF)
//	{
//		int isALeapYear = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;//判断闰年
//		if (isALeapYear)
//		{
//			printf("%d\n", aLeapYear[month - 1]);
//		}
//		else
//		{
//			printf("%d\n", LeapYear[month - 1]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x;
//	while (scanf("%d\n", &x) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < x; i++)
//		{
//			printf("*");
//		}
//	}
//	return 0;
//

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0, j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <=i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		
//		for (i = 0; i < n; i++)
//		{
//			//打印空格
//			for (j = 0; j < n - i - 1; j++)
//			{
//				printf("  ");
//			}
//			//打印*
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		
//	}
//	return 0;
//}



//打印棱形
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		//打印上半部分
//		for (i = 0; i <= n; i++)
//		{
//			//打印空格
//			for (j = i; j < n; j++)
//			{
//				printf(" ");
//			}
//			//打印*
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		//下半部分
//		for (i = 0; i < n; i++)
//		{
//			//打印空格
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			//打印*
//			for (j = i; j < n; j++)
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
//	int n = 0, i = 0, j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i <= n; i++)
//		{
//			for (j = i; j <= n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i <= n; i++)
//		{
//			for (j = 0; j < i + 1; j++)
//			{
//				if (i != 0)
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}