#include <stdio.h>

int power(int, int);

/* Testing of power - the function that powers */

int main()
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d \n", i ,power(2, i), power(-3, i));
	return 0;
}

/* power: powers base to n step; n >= 0 */
int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; i++)
		p = p* base;

	return p;
}

