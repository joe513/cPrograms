#include <stdio.h>

/* Counting of symbols in the in-stream; 1st version */


void main()
{
	long nc;
	nc = 0;

	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}

