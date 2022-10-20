#include <stdio.h>
int main () 
{
	char j; 
	int i;
	for (i = 0; i < 10; i++)
	{
	for (j = 'a'; j <= 'z'; j++)
		printf("%c", j);
	printf("\n");
	}
	return (0);
}
