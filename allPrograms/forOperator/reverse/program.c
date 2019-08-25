#include <stdio.h>

int main()
{
	float	fahrengate;
	int	lowest, highest, step;
//	Customization of the program
	lowest = 0; highest = 300; step = 10;

	for (fahrengate = 300; fahrengate >= lowest; fahrengate = fahrengate - step)
		printf("%5.2f\t%5.2f\n", fahrengate, ((fahrengate - 32)/1.8));
}

