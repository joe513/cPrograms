#include <stdio.h>

int main()
{
	int symbol;

	while ((symbol = getchar()) != EOF){
		if (symbol == '\t')
			printf("\\t");
		if (symbol == '\b')
			printf("\\b");
		if (symbol != '\b' && symbol != '\t' && symbol != '\\')
			putchar(symbol);

	}
}
