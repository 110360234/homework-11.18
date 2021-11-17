#include<stdio.h>
#include<stdlib.h>

void Hol(int N, int A, int C, int B);

int main(void)
{
	int N, A, C, B;
	printf("N from to ram");
	scanf_s("%d %d %d %d", &N, &A, &C, &B);
	Hol(N, A, C, B);
	system("pause");
	return 0;
}

void Hol(int N, int from, int to, int ram)
{
	if (N == 1)
	{
		printf("%c --> %c\n", from + 64, to + 64);
		return;
	}
	Hol(N - 1, from, ram, to);
	printf("%c --> %c\n", from + 64, to + 64);
	Hol(N - 1, ram, to, from);
}