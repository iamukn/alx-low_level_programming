/**
 * main - initiates the program
 *
 * Description: conditional statement
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;

n = 601;
/* your code goes there */
int digit;
digit = n % 10;
if (n > 5)
{
printf("Last digit of\n %d is %d and is greater than 5\n", n, digit);
}
else if (n > 0)
{
printf("Last digit of\n %d is %d and is 0\n", n, digit);
}
else if (n < 6 && n != 0)
{
printf("Last digit of\n %d is %d and is less than 6 and not 0\n", n, digit);
}
return (0);
}