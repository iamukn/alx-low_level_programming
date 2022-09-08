/**
 * main - initiates the program
 *
 * Description: prints the size of variables
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main()
{
char charType;
int intType;
long int longInt;
long long longLong;
float floatType;
printf("Size of a char:%zu byye(s)\n", sizeof(charType));
printf("Size of an int:%zu byte(s)\n", sizeof(intType));
printf("Size of a long int:%zu byte(s)\n", sizeof(longInt));
printf("Size of a long long:%zu byte(s)\n", sizeof(longLong));
printf("Size of a float:%zu byte(s)\n", sizeof(floatType));
return (0);
}
