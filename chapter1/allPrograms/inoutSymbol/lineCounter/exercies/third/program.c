#include <stdio.h>

#define		IN	1	/* In the word */
#define		OUT	0	/* Out of the word */

int main()
{
	int	c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF)
		++nc;

		if (c == '\n')
			++nl;

		if (c == ' ' || c == '\n'   \
		|| c == '\t')
			state = OUT;

		else if (state = OUT)	{
			state = IN;
			++nw;
	}
	printf("Line Number: %d \tWord Number: %d charNubmer: %d\n", \
		nl, nw, nc);
}
