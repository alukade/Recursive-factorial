#include<stdio.h>

long fact(int num);

long fact(int num)
{
	long result;

	if (num > 0)
	{
		result = num * fact(num - 1);
	}
	else
	{
		result = 1;
	}
	return result;
}

int main(void)
{
	int num;

	printf("������һ����������");
	scanf_s("%d", &num);
	printf("%d�Ľ׳���%d", num, fact(num));

	return 0;
}

