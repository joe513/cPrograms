#include <stdio.h>

void squeeze(char[], int);

int main()
{
	char string[100] = "Hello world";
	squeeze(string, 'w');
}

//	squeeze: deletes all symbols c from the s string
void squeeze(char s[] , int c)
{
	int i , j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
	printf("%s\n", s);
}
