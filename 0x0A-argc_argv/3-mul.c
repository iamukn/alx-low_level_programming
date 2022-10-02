#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two digits
 *
 * @argc: cli arg count
 *
 * @argv: cli arrays
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
int i, j;

if (argc == 1)
{
printf("Error\n");
return (1);
}
j = atoi(argv[1]);
i = atoi(argv[2]);

printf("%d\n", j * i);

return (0);
}
