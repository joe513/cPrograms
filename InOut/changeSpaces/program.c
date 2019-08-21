#include <stdio.h>

int main()
{
	int c, spaceWas;
	spaceWas = 0;

	while (c = getchar() != EOF){
		if (c == ' '){
			if (spaceWas == 0){
				putchar(c);
				spaceWas = 1;
			}
		}
		if (c != ' '){
			putchar(c);
			spaceWas = 0;
		}
	}
}
