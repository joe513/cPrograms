#include <stdio.h>

#define		MAXLINE		1000

int maxLength; /* Current maximal length*/

char line[MAXLINE]; /* Current entered line */
char longest[MAXLINE]; /* The most length line fron entered ones */

int getline(void);
void copy(void);

/*Printing the most length line in the streamer; special VERSION */
int main()
{
	int len;
	extern int max;
	extern char longest;

	max = 0;


