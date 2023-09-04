// Patterns: 2

#include <stdio.h>
int main()

{
	int rows = 5;
	int i,j;
	char n = 'A';

	for (i = 0; i < rows; i++) 
	{
		for (j = 0; j <= i; j++) 
		{
			printf("%c ", n++);
		}
		printf("\n");
	}
	return 0;
}

