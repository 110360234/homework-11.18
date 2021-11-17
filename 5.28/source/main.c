#include<stdio.h>
#include<stdlib.h>

int change(char a);

int main(void)
{
	char let;
	printf("Enter a letter:");
	scanf_s("%c", &let);
	printf("the letter is: %c", change(let));
}
int change(char a)
{
	if (a >= 97)
		return (a - 32);
	else
		return (a + 32);
}