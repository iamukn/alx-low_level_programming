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

j =1;

if (argc == 1)
{
printf("Error\n");
return (1);
}

for (i =1; i < argc; i++)
{
j *= atoi(argv[i]);
}
printf("%d\n", j);

return (0);
}
