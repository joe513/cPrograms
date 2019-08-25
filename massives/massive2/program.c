
#include <stdio.h>

#define		MAXLINE		1000	/* Max len of a line in the stream */

int gettline(char line[], int maxline);
void copy(char to[], char from[]);

/* Printing the most width line */
int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while ((len = gettline(line, MAXLINE)) > 0)
		if (len > max)	{
			max = len;
			copy(longest, line);
		}
		if (max > 0)	/* It was not empty line */
			printf("%s", longest);
		return 0;
}

/* getline: counting line in s, return its len */
int gettline(char inMassive[], int length)
{
	int c, i;

	for (i = 0; i < length -1 && (c = getchar() != EOF) && c!='\n'; ++i)
		inMassive[i] = c;

	if (c == '\n')	{
		inMassive[i] = c;
		++i;
	}
	inMassive[i] = '\0';
	return i;
}

/* copy: copying line 'from' to 'to'; len 'to' is ok */
void copy(char to[], char from[])
{
	int i;
	i = 0;

	while ((to[i] = from[i]) != '\0')
	++i;
}
