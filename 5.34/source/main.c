#include<stdio.h>
#include<stdlib.h>

int power(int base, int exponent);

int main(void)
{
	int n, e;
	printf("��J�Ʀr and ����:");
	scanf_s("%d%d", &n, &e);
	printf("���G:%d", power(n, e));
}
int power(int base, int exponent)
{
	int i;
	int j = base;
	for (i = exponent - 1; i > 0; i--)
	{
		j = j * base;
	}
	return j;
}