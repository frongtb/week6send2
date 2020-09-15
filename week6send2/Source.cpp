#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
void calabs(int);
void plusalr(void);
void Zero(void);
int main()
{
	int num;
	scanf("%d", &num);
	if (num < 0)
	{
		for (int a = 0; num < a; a--)
		{
			calabs(num);
		}
	}
	else if (num == 0)
	{
		Zero();
	}
	else {
		for (int a = 0; num > a; a++)
		{
			plusalr();
		}
	}
	return 0;
}

void calabs(int num)
{
	printf("%f\n", fabs(num));
}
void plusalr(void)
{
	printf("It plus already\n");
}
void Zero(void)
{
	printf("Zero");
}