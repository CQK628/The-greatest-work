#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("%d\n", a);
	}
	return 0;
}