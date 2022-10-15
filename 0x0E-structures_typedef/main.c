#include <stdio.h>
#include "dog.h"
int main ()
{
struct dog my_dog;
my_dog.name = "poppy";
my_dog.age = 34;
my_dog.owner = "bob";
printf("%s , %f \n", my_dog.name, my_dog.age);
return (0);
}
